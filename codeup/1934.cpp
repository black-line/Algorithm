//
// Created by jessy on 01/04/18.
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
    while (scanf("%d", &T) != -1) {
        int a[300];
        for (int i = 0; i < T; ++i) {
            scanf("%d", a + i);
        }
        int x;
        scanf("%d", &x);
        int j;
        for (j = 0; j < T; ++j) {
            if (a[j] == x) {
                printf("%d\n", j);
                break;
            }
        }
        if (j == T) {
            printf("-1\n");
        }
    }
    return 0;
}