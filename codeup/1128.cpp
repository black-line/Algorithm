//
// Created by jessy on 01/11/18.
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


int main() {
    freopen("..\\in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) && n) {
        double num = 0.0;
        if (n <= 4) {
            num = 10;
        } else if (n <= 8) {
            num = 10 + 2 * (n - 4);
        } else {
            while (n >= 8) {
                n -= 8;
                num += 18;
            }
            if (n <= 4) {
                num += n * 2.4;
            } else {
                num += 10 + (n - 4) * 2;
            }
        }
        if (num == (int) num)printf("%d\n", (int) num);
        else printf("%.1f\n", num);
    }
    return 0;
}