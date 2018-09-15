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


int main() {
    freopen("../in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; ++i) {
        printf("Case #%d: ", i);
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        //a,b异号要考虑a或b为0的情况,故判断条件取-1
        if ((a > -1 && b < -1) || (a < -1 && b > -1)) {
            if (a + b > c)printf("true");
            else printf("false");
        } else if ((a > 0 && c > 0) || (a < 0 && c < 0)) {
            if (a - c > -1 * b)printf("true");
            else printf("false");
        } else {
            if (a > c)printf("true");
            else printf("false");
        }
        printf("\n");
    }
    return 0;
}
