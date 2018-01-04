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
    char n[100];
    while (scanf("%s", n) != -1) {
        int len = strlen(n);
        int side = floor((len + 2) / 3.0) - 1;
        int bottom = len - side * 2;
        for (int i = 0; i < side; ++i) {
            printf("%c", n[i]);
            for (int j = 0; j < bottom - 2; ++j) {
                printf(" ");
            }
            printf("%c", n[len - 1 - i]);
            printf("\n");
        }
        for (int j = 0 + side; j < bottom + side; ++j) {
            printf("%c", n[j]);
        }
        printf("\n");
    }
    return 0;
}