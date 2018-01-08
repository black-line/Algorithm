//
// Created by jessy on 01/08/18.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
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

int weight[30];
int n;

int F(int t, int w) {
    if (w == 40)return 1;
    if (t > n)return 0;
    return F(t + 1, w + weight[t]) + F(t + 1, w);
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    while (scanf("%d", &n) != -1) {
        for (int i = 1; i <= n; ++i) {
            scanf("%d", weight + i);
        }
        printf("%d\n", F(1, 0));
    }
    return 0;
}