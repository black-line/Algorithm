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
char Month[13][13] = {" ", "January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
char Week[8][13] = {" ", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    int y1, d1;
    char m[20];
    while (scanf("%d%s%d", &d1, m, &y1) != -1) {
        int m1;
        for (int i = 1; i < 13; ++i) {
            if (!strcmp(m, Month[i])) {
                m1 = i;
                break;
            }
        }
        int y2, m2, d2;
        int period = 0;
        int time1 = y1 * 10000 + m1 * 100 + d1;
        int time2 = 20180101;
        int flag = 0;
        if (time1 > time2) {
            int tmp;
            tmp = time1;
            time1 = time2;
            time2 = tmp;
            flag = 1;
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
        // printf("%d\n", period);
        if (flag) {
            switch (period %= 7) {
                case 0:
                    printf("%s\n", Week[1]);
                    break;
                case 1:
                    printf("%s\n", Week[2]);
                    break;
                case 2:
                    printf("%s\n", Week[3]);
                    break;
                case 3:
                    printf("%s\n", Week[4]);
                    break;
                case 4:
                    printf("%s\n", Week[5]);
                    break;
                case 5:
                    printf("%s\n", Week[6]);
                    break;
                case 6:
                    printf("%s\n", Week[7]);
                    break;
            }

        } else {
            switch (period %= 7) {
                case 0:
                    printf("%s\n", Week[1]);
                    break;
                case 1:
                    printf("%s\n", Week[7]);
                    break;
                case 2:
                    printf("%s\n", Week[6]);
                    break;
                case 3:
                    printf("%s\n", Week[5]);
                    break;
                case 4:
                    printf("%s\n", Week[4]);
                    break;
                case 5:
                    printf("%s\n", Week[3]);
                    break;
                case 6:
                    printf("%s\n", Week[2]);
                    break;
            }

        }

    }
    return 0;
}