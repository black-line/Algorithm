/*
 * Author: Zequn Wu
 * date: 9/16/18 9:23 AM
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


int main() {
    freopen("../in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n), n) {
        int score[1010];
        memset(score, 0, sizeof(score));
        for (int i = 0; i < n; ++i) {
            scanf("%d", score + i);
        }
        int count = 0, v;
        scanf("%d", &v);
        for (int j = 0; j < n; ++j) {
            if (score[j] == v)count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
