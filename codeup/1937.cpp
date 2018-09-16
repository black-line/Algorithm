/*
 * Author: Zequn Wu
 * date: 9/16/18 9:24 AM
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
    while (scanf("%d", &n) != EOF) {
        int num[110];
        for (int i = 0; i < n; ++i) {
            scanf("%d", num + i);
        }
        int m;
        scanf("%d", &m);
        while (m--) {
            int v;
            scanf("%d", &v);
            int isExist = 0;
            for (int i = 0; i < n; ++i) {
                if (num[i] == v) {
                    isExist = 1;
                    break;
                }
            }
            if (isExist)printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
