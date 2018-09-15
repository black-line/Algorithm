/*
 * Author: Zequn Wu
 * date: 9/15/18 4:03 PM
 */

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

int cycle[100010] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N) != EOF) {
        int a, result = 0;
        for (int i = 2; i <= N; ++i) {
            scanf("%d", &a);
            cycle[i] = cycle[i - 1] + a;
        }
        scanf("%d", &a);
        cycle[1] = cycle[N] + a;
        int M;
        scanf("%d", &M);
        while (M--) {
            int x, y;
            scanf("%d%d", &x, &y);
            result = abs(cycle[x] - cycle[y]);
            if (result < cycle[1] - result)printf("%d\n", result);
            else printf("%d\n", cycle[1] - result);
        }
    }
    return 0;
}
