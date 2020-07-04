//
// Filename: 日期差值.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000578&pid=0
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

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    freopen("../in.txt", "r", stdin);
    int y1, m1, d1, y2, m2, d2, time1, time2;
    while (scanf("%d\n%d", &time1, &time2) != EOF) {
        if (time1 > time2) {
            int temp = time1;
            time1 = time2;
            time2 = temp;
        }
        y1 = time1 / 10000;
        m1 = time1 % 10000 / 100;
        d1 = time1 % 100;
        y2 = time2 / 10000;
        m2 = time2 % 10000 / 100;
        d2 = time2 % 100;
        int num = 1;
        // hard to decide add 365 or 366
//        while (y1 < y2 - 1) {
//            num += month[0][isLeap(y1 + 1)];
//            y1++;
//        }
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
        printf("%d\n", num);

    }
    return 0;
}