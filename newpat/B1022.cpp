//
// Filename: B1022.cpp
// Author: Zequn Wu
// Date: 8/7/20
// Problem link: https://pintia.cn/problem-sets/994805260223102976/problems/994805299301433344
//
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
    int a, b, d;
    while (scanf("%d %d %d", &a, &b, &d) != EOF) {
        int c = a + b;
        int ans[100] = {0}, num = 0;
        memset(ans, 0, sizeof(ans));
        do {
            ans[num++] = c % d;
            c = c / d;
        } while (c != 0);
        for (int i = num - 1; i >= 0; --i) {
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    return 0;
}