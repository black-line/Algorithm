//
// Created by jessy on 01/05/18.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
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

bool isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Year[2][13] = {
        {365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int y, m, d;
        scanf("%d%d%d", &y, &m, &d);
        if (m == 12 && d == 31) {
            y++;
            m = 1;
            d = 1;
        } else {
            if (d == Year[isLeapYear(y)][m]) {
                m++;
                d = 1;
            } else {
                d++;
            }
        }
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    return 0;
}