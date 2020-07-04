//
// Filename: B1036.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680
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


int main() {
    freopen("../in.txt", "r", stdin);
    int n, col, row;
    char c;
    scanf("%d %c", &n, &c);
    col = n;
    if (col % 2 == 0) {
        row = col / 2;
    } else {
        row = col / 2 + 1;
    }
    for (int i = 0; i < row; ++i) {
        if (i == 0 || i == row - 1) {
            for (int j = 0; j < col; ++j) {
                printf("%c", c);
            }
            printf("\n");
        } else {
            printf("%c", c);
            for (int j = 0; j < col - 2; ++j) {
                printf(" ");
            }
            printf("%c\n", c);
        }
    }

    return 0;
}