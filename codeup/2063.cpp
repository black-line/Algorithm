/*
 * Author: Zequn Wu
 * date: 9/16/18 11:44 AM
 */

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

int isLeap(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    else return 0;
}

int dayInMouth[2][13] = {{365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main() {
    freopen("../in.txt", "r", stdin);
    int M;
    scanf("%d", &M);
    while (M--) {
        int y, m, d, co;
        scanf("%d %d %d %d", &y, &m, &d, &co);
        while (co--) {
            d++;
            if (d > dayInMouth[isLeap(y)][m]) {
                d = 1;
                m++;
            }
            if (m > 12) {
                m = 1;
                d = 1;
                y++;
            }
        }
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    return 0;
}
