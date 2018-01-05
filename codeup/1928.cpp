//
// Created by jessy on 01/04/18.
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
    int time1, time2;
    while (scanf("%d%d", &time1, &time2) != -1) {
        int y1, m1, d1;
        int y2, m2, d2;
        int period = 1;
        if (time1 > time2) {
            int tmp;
            tmp = time1;
            time1 = time2;
            time2 = tmp;
        }
        d1 = time1 % 100;
        m1 = time1 % 10000 / 100;
        y1 = time1 / 10000;
        d2 = time2 % 100;
        m2 = time2 % 10000 / 100;
        y2 = time2 / 10000;
        while (!((y1 == y2) && (m1 == m2) && (d1 == d2))) {
            if (m1 == 12 && d1 == 31) {
                y1++;
                m1 = 1;
                d1 = 1;
            } else {
                if (d1 == Year[isLeapYear(y1)][m1]) {
                    m1++;
                    d1 = 1;
                } else {
                    d1++;
                }
            }
            period++;
        }
        printf("%d\n", period);
    }
    return 0;
}


/*
int main() {
    int time1, time2;
    while (scanf("%d%d", &time1, &time2) != -1) {
        int y1, m1, d1;
        int y2, m2, d2;
        int peroidY = 0, periodM = 0, periodD = 0, period = 0;
        if (time1 > time2) {
            int tmp;
            tmp = time1;
            time1 = time2;
            time2 = tmp;
        }
        d1 = time1 % 100;
        m1 = time1 % 10000 / 100;
        y1 = time1 / 10000;
        d2 = time2 % 100;
        m2 = time2 % 10000 / 100;
        y2 = time2 / 10000;

        // cal Y
        if (y1 != y2) {
            for (int i = y1; i < y2; ++i) {
                peroidY += Year[isLeapYear(i+1)][0];
            }
        }
        // cal M
        if (m1 != m2) {
            if (m1 < m2) {
                for (int i = m1; i < m2; ++i) {
                    periodM += Year[isLeapYear(y2)][i];
                }
            } else {
                for (int i = m2; i < m1; ++i) {
                    periodM -= Year[isLeapYear(y2)][i];
                }
            }
        }
        // cal D
        if (d1 != d2) {
            if (d1 < d2) {
                periodD = d2 - d1 + 1;
            } else {
                periodD = -(d1 - d2 - 1);
            }
        }
        period = peroidY + periodM + periodD;
        printf("%d\n", period);
    }
    return 0;
}
 */