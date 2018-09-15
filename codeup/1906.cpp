/*
 * Author: Zequn Wu
 * date: 9/15/18 4:02 PM
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
    char a[20], b[20];
    while (scanf("%s%s", a, b) != EOF) {
        int result = 0;
        for (int i = 0; i < strlen(a); ++i) {
            for (int j = 0; j < strlen(b); ++j) {
                result += (a[i] - '0') * (b[j] - '0');
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
