//
// Filename: 查找.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000576&pid=3
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

const int maxn = 110;
int num[maxn] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int n, m, t;
    while (scanf("%d", &n) != EOF) {
        memset(num, 0, sizeof(num));
        for (int i = 0; i < n; ++i) {
            scanf("%d", num + i);
        }
        scanf("%d", &m);
        int i;
        for (int j = 0; j < m; ++j) {
            scanf("%d", &t);
            for (i = 0; i < n; ++i) {
                if (num[i] == t) {
                    puts("YES");
                    break;
                }
            }
            if (i == n) {
                puts("NO");
            }
        }
    }
    return 0;
}