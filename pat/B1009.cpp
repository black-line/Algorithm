/*
 * Author: Zequn Wu
 * date: 9/27/18 5:42 PM
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
    char c[100];
    cin.getline(c, 100);
    int len = strlen(c);
    int i = 0, j = 0;
    for (i = len - 1; i >= 0; --i) {
        for (j = i; c[j] != ' '; --j) {
            if (j == 0)
                break;
        }
        int k = 0;
        if (j == 0) {
            k = j;
        } else {
            k = j + 1;
        }
        for (; k <= i; ++k) {
            printf("%c", c[k]);
        }
        if (j != 0) {
            printf(" ");
        }
        i = j;
    }
    return 0;
}
