/*
 * Author: Zequn Wu
 * date: 9/28/18 6:21 PM
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
    int m;
    scanf("%d", &m);
    char ans[6][30];
    int num = 0;
    while (m--) {
        for (int i = 3; i >= 1; --i) {
            strcpy(ans[i + 1], ans[i]);
        }
        scanf("%s", ans[1]);
        num = num < 4 ? num + 1 : 4;
        for (int j = 1; j <= num; ++j) {
            printf("%d=%s", j, ans[j]);
            if (j != num)printf(" ");
            else printf("\n");
        }
    }
    return 0;
}
