//
// Created by jessy on 01/06/18.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
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
    int n;
    while (scanf("%d", &n) && n) {
        int s[10010];
        for (int i = 0; i < n; ++i) {
            scanf("%d", s + i);
        }
        sort(s, s + n);
        if (n % 2) {
            printf("%d\n", s[n / 2]);
        } else {
            printf("%d\n", int(floor((s[n / 2] + s[n / 2 - 1]) / 2.0)));
        }
    }
    return 0;
}