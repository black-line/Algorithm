/*
 * Author: Zequn Wu
 * date: 9/16/18 11:43 AM
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
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return 1;
    } else return 0;
}

int main() {
    freopen("../in.txt", "r", stdin);
    int daysInMouth[2][13] = {{365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                              {366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    char a[10], b[10], t[10];
    while (scanf("%s", a) != EOF) {
        scanf("%s", b);
        if (strcmp(a, b) > 0) {
            strcpy(t, a);
            strcpy(a, b);
            strcpy(b, t);
        }
        int y1, m1, d1;
        int y2, m2, d2;
        sscanf(a, "%4d%2d%2d", &y1, &m1, &d1);
        sscanf(b, "%4d%2d%2d", &y2, &m2, &d2);
        int count = 1;
        while (!(y1 == y2 && m1 == m2 && d1 == d2)) {
            int flag = isLeap(y1);
            if (y1 < y2 - 1) {
                y1++;
                count += daysInMouth[flag][0];
            } else {
                d1++;
                count++;
                if (d1 > daysInMouth[flag][m1]) {
                    m1++;
                    d1 = 1;
                    if (m1 > 12) {
                        y1++;
                        m1 = 1;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
