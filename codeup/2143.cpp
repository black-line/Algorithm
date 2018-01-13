//
// Created by jessy on 01/13/18.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <cstdbool>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
const int INF = (1 << 30) - 1;
const double eps = 1e-8;

#define Equ(a, b) ((fabs((a)-(b)))<(eps))
#define More(a, b) (((a)-(b))>(eps))
#define Less(a, b) (((a)-(b))<(-eps))
#define MoreEqu(a, b) (((a)-(b))>(-eps))
#define LessEqu(a, b) (((a)-(b))<(eps))

const int maxn = 110;
int medicine[maxn];

int main() {
    freopen("..\\in.txt", "r", stdin);
    int c;
    scanf("%d", &c);
    while (c--) {
        int n, v, w;
        scanf("%d%d%d", &n, &v, &w);
        for (int i = 0; i < n; ++i) {
            scanf("%d", medicine + i);
        }
        sort(medicine, medicine + n);
        int bottleNum = 0;
        double currentConcentration = 0;
        for (int j = 0; j < n; ++j) {
            double t = (currentConcentration * bottleNum + medicine[j]) / ++bottleNum;
            if (t > w) {
                bottleNum--;
                break;
            } else {
                currentConcentration = t;
            }
        }
        if (bottleNum == 0) {
            printf("0 0.00\n");
        } else {
            printf("%d %.2f\n", v * bottleNum, floor(currentConcentration + 0.5) / 100);
        }
    }
    return 0;
}