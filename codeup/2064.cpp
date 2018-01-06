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
    int T;
    while (scanf("%d", &T) != -1) {
        char r[5][30];
        for (int j = 1; j <= T; ++j) {
            char s[30];
            scanf("%s", s);
            for (int i = 4; i >= 2; --i) {
                strcpy(r[i], r[i - 1]);
            }
            strcpy(r[1], s);
            for (int k = 1; k <= j && k <= 4; ++k) {
                printf("%d=%s", k, r[k]);
                if (k < j)printf(" ");
            }
            printf("\n");

        }
    }
    return 0;
}