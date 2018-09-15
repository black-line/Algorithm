/*
 * Author: Zequn Wu
 * date: 9/15/18 3:41 PM
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
    scanf("%d", &n);
    int count = 0;
    while (n != 1) {
        if (n % 2) {
            n = (3 * n + 1) / 2;
            count++;
        } else {
            n /= 2;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
