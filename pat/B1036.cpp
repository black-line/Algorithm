/*
 * Author: Zequn Wu
 * date: 9/16/18 10:16 AM
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
    char c;
    scanf("%d %c", &n, &c);
    int row = 0;
    if (n % 2)row = n / 2 + 1;
    else row = n / 2;
    for (int j = 0; j < n; ++j) {
        printf("%c", c);
    }
    printf("\n");
    for (int i = 2; i <= row - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || j == n - 1)printf("%c", c);
            else printf(" ");
        }
        printf("\n");
    }
    for (int j = 0; j < n; ++j) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
