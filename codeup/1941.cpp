//
// Created by jessy on 01/05/18.
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
    int d;
    while (scanf("%d", &d) && d != 0) {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        long long sum = a + b;
        int num = 0;
        int r[50];
        do {
            r[num++] = sum % d;
            sum /= d;
        } while (sum != 0);
        for (int i = num - 1; i >= 0; --i) {
            printf("%d", r[i]);
        }
        printf("\n");
    }

    return 0;
}