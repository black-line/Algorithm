//
// Filename: 八进制.cpp
// Author: Zequn Wu
// Date: 8/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000579&pid=3
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
        int idx = 0;
        int ans[100] = {0};
        memset(ans, 0, sizeof(ans));
        do {
            ans[idx++] = n % 8;
            n /= 8;
        } while (n != 0);
        for (int i = idx - 1; i >= 0; --i) {
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    return 0;
}