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
    char s[1000];
    while (scanf("%s", s) != EOF) {
        int len = strlen(s);
        int n1, n2, n3;
        n1 = n3 = (len + 2) / 3;
        n2 = len + 2 - n1 - n3;
        int blank = n2 - 2;
        for (int i = 0; i < n1 - 1; ++i) {
            printf("%c", s[i]);
            for (int j = 0; j < blank; ++j) {
                printf(" ");
            }
            printf("%c\n", s[len - 1 - i]);
        }
        for (int k = 0; k < n2; ++k) {
            printf("%c", s[n1 - 1 + k]);
        }
        printf("\n");
    }
    return 0;
}
