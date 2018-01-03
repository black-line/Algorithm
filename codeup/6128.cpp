//
// Created by jessy on 01/03/18.
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
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; ++i) {
        int flag = 0;
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        if (More(a + b, c))printf("Case #%d: true\n", i);
        else printf("Case #%d: false\n", i);
    }
    return 0;
}