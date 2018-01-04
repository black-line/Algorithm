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
    scanf("%d", &T);
    while (T--) {
        int a;
        scanf("%d", &a);
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a - 1 - i; ++j) {
                printf(" ");
            }
            for (int k = 0; k < a + i * 2; ++k) {
                printf("*");
            }
            for (int l = 0; l < a - 1 - i; ++l) {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}