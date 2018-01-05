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
    int Y, D;
    while (scanf("%d%d", &Y, &D) != -1) {
        int m = 1, d = 0;
        for (int i = 1; i <= 12; ++i) {
            if (D > Year[isLeapYear(Y)][i]) {
                D -= Year[isLeapYear(Y)][i];
                m++;
            } else {
                d = D;
                break;
            }
        }
        printf("%04d-%02d-%02d\n", Y, m, d);
    }
    return 0;
}