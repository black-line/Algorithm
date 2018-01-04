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
    int T1;
    while (scanf("%d", &T1) != -1) {
        int a[200];
        for (int i = 0; i < T1; ++i) {
            scanf("%d", a + i);
        }
        int T2;
        scanf("%d", &T2);
        for (int j = 0; j < T2; ++j) {
            int q, i;
            scanf("%d", &q);
            for (i = 0; i < T1; ++i) {
                if (q == a[i]) {
                    printf("YES\n");
                    break;
                }
            }
            if (i == T1)printf("NO\n");

        }
    }
    return 0;
}