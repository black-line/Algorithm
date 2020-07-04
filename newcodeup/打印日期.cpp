//
// Filename: 打印日期.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000578&pid=2
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
    int y, n;
    while (scanf("%d %d", &y, &n) != EOF) {
        int m = 1, d = 0;
        while (n--) {
            d++;
            if (d > month[m][isLeap(y)]) {
                d = 1;
                m++;
            }
            if (m > 12) {
                y++;
                m = 1;
            }
        }
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    return 0;
}