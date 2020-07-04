//
// Filename: Day_of_Week.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000578&pid=1
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

const int month[13][2] = {
        {365, 366},
        {31,  31},
        {28,  29},
        {31,  31},
        {30,  30},
        {31,  31},
        {30,  30},
        {31,  31},
        {31,  31},
        {30,  30},
        {31,  31},
        {30,  30},
        {31,  31},
};
const char monthName[13][20] = {
        "\0",
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"

};
const char weekName[7][20] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
};

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int str2int(char str[]) {
    for (int i = 1; i <= 12; ++i) {
        if (strcmp(monthName[i], str) == 0) {
            return i;
        }
    }
    return 0;
}

int duration(int y1, int m1, int d1, int y2, int m2, int d2) {
    int num = 0;
    // hard to decide add 365 or 366
//    while (y1 < y2 - 1) {
//        num += month[0][isLeap(y1 + 1)];
//        y1++;
//    }
    while (y1 < y2 || m1 < m2 || d1 < d2) {
        num++;
        d1++;
        if (d1 > month[m1][isLeap(y1)]) {
            d1 = 1;
            m1++;
        }
        if (m1 > 12) {
            y1++;
            m1 = 1;
        }
    }
    return num;
}

int main() {
    freopen("../in.txt", "r", stdin);
    int d1, d2, y1, y2, m1, m2;
    char strm1[10], strm2[10];
    while (scanf("%d %s %d", &d1, strm1, &y1) != EOF) {
//        printf("%d %s %d\n", d1, strm1, y1);
        strcpy(strm2, "July");
        d2 = 6;
        y2 = 2020;
        m1 = str2int(strm1);
        m2 = str2int(strm2);
        bool isPast = true;
        if ((y1 > y2) || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
            swap(y1, y2);
            swap(m1, m2);
            swap(d1, d2);
            isPast = false;
        }
        //printf("%d %d %d %d %d %d\n", y1, m1, d1, y2, m2, d2);
        int dur = duration(y1, m1, d1, y2, m2, d2);
        //printf("%d %d %d\n", dur, dur % 7, isPast);
        if (dur == 0) {
            puts(weekName[0]);
        } else if (isPast) {
            puts(weekName[(0 - dur % 7 + 7) % 7]);
        } else {
            puts(weekName[(0 + dur % 7) % 7]);
        }
    }
    return 0;
}