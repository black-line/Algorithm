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

int strToInt(char a[]) {
    int n = 0, flag = 1;
    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] == '-')flag = -1;
        else if (a[i] != ',') {
            n = n * 10 + a[i] - '0';
        }
    }
    return n * flag;
}

int main() {
    freopen("../in.txt", "r", stdin);
    char a[20], b[20];
    while (scanf("%s %s", a, b) != EOF) {
        int c = strToInt(a);
        int d = strToInt(b);
        printf("%d\n", c + d);
    }
    return 0;
}
