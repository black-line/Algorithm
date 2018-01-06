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
    int N;

    while (scanf("%d", &N) != -1) {
        int a[1010];
        for (int i = 0; i < N; ++i) {
            scanf("%d", a + i);
        }
        sort(a, a + N);
        printf("%d\n", a[N - 1]);
        if (N > 1) {
            for (int i = 0; i < N - 1; ++i) {
                printf("%d ", a[i]);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    }
    return 0;
}