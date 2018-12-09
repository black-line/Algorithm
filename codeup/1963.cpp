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
    char s[9999], c;
    while (fgets(s, 9998, stdin) != NULL) {
        scanf("%c", &c);
        for (int i = 0; i < strlen(s); ++i) {
            if (s[i] != c)printf("%c", s[i]);
        }
        getchar();
    }
    return 0;
}
