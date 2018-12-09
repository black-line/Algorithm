/*
 * Author: Zequn Wu
 * date: 9/28/18 6:20 PM
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
    char s[150];
    while (fgets(s, 150, stdin) != NULL) {
        char a[150], b[150];
        scanf("%s", a);
        scanf("%s", b);
        int len = strlen(s), r = 0, c = 0;
        char ans[150][150];
        for (int i = 0; i < len; ++i) {
            if (s[i] == ' ') {
                ans[r++][c] = '\0';
                c = 0;
            } else {
                ans[r][c++] = s[i];
            }
        }
        ans[r][--c] = '\0';
        for (int j = 0; j <= r; ++j) {
            if (strcmp(a, ans[j]) == 0)printf("%s", b);
            else printf("%s", ans[j]);
            if (j < r)printf(" ");
        }
        printf("\n");
        getchar();
    }
    return 0;
}
