//
// Filename: 等腰梯形.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000577&pid=2
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
    int m;
    while (scanf("%d", &m) != EOF) {
        while (m--) {
            int h;
            scanf("%d", &h);
            int longest = h + 2 * (h - 1);
            for (int i = 0; i < h; ++i) {
                for (int j = 0; j < (longest - (h + i * 2)) / 2; ++j) {
                    printf(" ");
                }
                for (int k = 0; k < (h + i * 2); ++k) {
                    printf("*");
                }
                for (int j = 0; j < (longest - (h + i * 2)) / 2; ++j) {
                    printf(" ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}