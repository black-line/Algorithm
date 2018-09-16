/*
 * Author: Zequn Wu
 * date: 9/16/18 10:30 AM
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
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                printf(" ");
            }
            for (int k = 0; k < n - i; ++k) {
                printf("*");
                if (k < n - i - 1)printf(" ");
                else printf("\n");
            }
        }
        for (int l = 1; l < n; ++l) {
            for (int i = 0; i < n - 1 - l; ++i) {
                printf(" ");
            }
            for (int j = 0; j < l + 1; ++j) {
                printf("*");
                if (j < l)printf(" ");
                else printf("\n");
            }
        }
    }
    return 0;
}
