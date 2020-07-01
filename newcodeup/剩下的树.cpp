//
// Filename: 剩下的树.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=0
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

const int maxl = 10010;
int road[maxl] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int l, m;
    while (scanf("%d %d", &l, &m), l || m) {
        memset(road, 0, sizeof(road));
        int cnt = 0;
        while (m--) {
            int a, b;
            scanf("%d %d", &a, &b);
            for (int i = a; i <= b; ++i) {
                road[i] = 1;
            }
        }
        for (int j = 0; j <= l; ++j) {
            if (road[j] == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}