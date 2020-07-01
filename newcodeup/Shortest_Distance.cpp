//
// Filename: Shortest_Distance.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=4
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

const int maxn = 100010;
int dis[maxn] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N) != EOF) {
        for (int i = 1; i <= N; ++i) {
            int a;
            scanf("%d", &a);
            dis[i] = dis[i - 1] + a;
        }
        int M;
        scanf("%d", &M);
        int a, b;
        for (int j = 0; j < M; ++j) {
            scanf("%d %d", &a, &b);
            int dis1 = abs(dis[a - 1] - dis[b - 1]);
            int dis2 = dis[N] - dis1;
            printf("%d\n", dis1 < dis2 ? dis1 : dis2);
        }
    }
    return 0;
}