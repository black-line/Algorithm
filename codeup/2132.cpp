//
// Created by jessy on 01/13/18.
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

const int maxn = 610;
int blocks[maxn];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    int l, n;
    while (scanf("%d%d", &l, &n) != -1) {
        for (int i = 0; i < n; ++i) {
            scanf("%d", blocks + i);
        }
        sort(blocks, blocks + n, cmp);
        for (int j = 0; j < n; ++j) {
            l -= blocks[j];
            if (l <= 0) {
                printf("%d\n", j + 1);
                break;
            }
        }
        if (l > 0)printf("impossible\n");
    }
    return 0;
}