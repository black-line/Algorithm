/*
 * Author: Zequn Wu
 * date: 9/27/18 5:35 PM
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

bool judge(char c[]) {
    int len = strlen(c);
    for (int i = 0; i < len / 2; ++i) {
        if (c[i] != c[len - 1 - i])
            return false;
    }
    return true;
}

int main() {
    freopen("../in.txt", "r", stdin);
    char c[300];
    while (scanf("%s", c) != EOF) {
        bool flag = judge(c);
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
