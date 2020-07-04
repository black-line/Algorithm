//
// Filename: 沙漏图形.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000577&pid=3
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
    int n;
    while (scanf("%d", &n) != EOF) {
        int h = n * 2 - 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                printf(" ");
            }
            for (int k = 0; k < n - i; ++k) {
                printf("*");
                if (k != n - i - 1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
        for (int j = h - n - 1; j >= 0; --j) {
            for (int i = 0; i < j; ++i) {
                printf(" ");
            }
            for (int k = 0; k < n - j; ++k) {
                printf("*");
                if (k != n - j - 1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}