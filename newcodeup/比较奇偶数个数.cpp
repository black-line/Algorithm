//
// Filename: 比较奇偶数个数.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=3
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
        int num_odd = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            scanf("%d", &a);
            if (a % 2 != 0) {
                num_odd++;
            }
        }
        if (num_odd < n - num_odd) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}