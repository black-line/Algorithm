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

int daysInMouth[2][13] = {{365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                          {366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
char dayOfWeek[10][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                          "Friday", "Saturday"};

int isLeap(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return 1;
    } else return 0;
}

void getYMD(int &y, int &m, int &d, int a, char b[], int c) {
    char Ename[14][100] = {" ",
                           "January", "February", "March", "April",
                           "May", "June", "July", "August",
                           "September", "October", "November", "December"};
    for (int i = 1; i <= 12; ++i) {
        if (strcmp(b, Ename[i]) == 0) {
            m = i;
            break;
        }
    }
    y = c;
    d = a;
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void output(int y, int m, int d) {
    // 2018 9 20 Thursday
    int y1 = 2018, m1 = 9, d1 = 20;
    int isExchanged = 0;
    if (y > y1) {
        swap(y, y1);
        swap(m, m1);
        swap(d, d1);
        isExchanged = 1;
    } else if (y == y1 && m > m1) {
        swap(y, y1);
        swap(m, m1);
        swap(d, d1);
        isExchanged = 1;
    } else if (y == y1 && m == m1 && d > d1) {
        swap(y, y1);
        swap(m, m1);
        swap(d, d1);
        isExchanged = 1;
    }
    int count = 0;
    while (!(d == d1 && m == m1 && y == y1)) {
        int flag = isLeap(y);
        count++;
        d++;
        if (d > daysInMouth[flag][m]) {
            d = 1;
            m++;
        }
        if (m > 12) {
            m = 1;
            y++;
        }
    }
    if (isExchanged) {
        int t = (4 + count % 7) % 7;
        printf("%s\n", dayOfWeek[t]);
    } else {
        int t = (4 - count % 7 + 7) % 7;
        printf("%s\n", dayOfWeek[t]);
    }
}

int main() {
    freopen("../in.txt", "r", stdin);
    int a1, c1;
    char b1[10];
    while (scanf("%d %s %d", &a1, b1, &c1) != EOF) {
        int y, m, d;
        getYMD(y, m, d, a1, b1, c1);
        output(y, m, d);
    }
    return 0;
}
