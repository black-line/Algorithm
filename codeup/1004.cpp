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
    int T1, T2, sum, a;
    scanf("%d", &T1);
    for (int j = 0; j < T1; ++j) {
        scanf("%d", &T2);
        sum = 0;
        for (int i = 0; i < T2; ++i) {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    return 0;
}