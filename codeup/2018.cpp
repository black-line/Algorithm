//
// Created by jessy on 01/08/18.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
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

int r[30] = {0, 1};

int main() {
    freopen("..\\in.txt", "r", stdin);
    int m;
    scanf("%d", &m);
    while (m--) {
        for (int i = 2; i < 30; ++i) {
            r[i] = r[i - 1] + r[i - 2];
        }
        int n;
        scanf("%d", &n);
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < 2 * (n - 1 - j); ++i) {
                printf(" ");
            }
            for (int k = 0; k < 2 * j + 1; ++k) {
                if (k != 0)printf(" ");
                printf("%d", r[k]);
            }
            printf("\n");
        }
    }
    return 0;
}