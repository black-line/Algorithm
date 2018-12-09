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
    char a[60], b[60];
    while (scanf("%s %s", a, b) != EOF) {
        int alen = strlen(a), blen = strlen(b);
        if (alen == blen) printf("%s is equal long to %s\n", a, b);
        else {
            if (alen > blen)printf("%s is longer than %s\n", a, b);
            else printf("%s is shorter than %s\n", a, b);
        }
    }
    return 0;
}
