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
    int N;
    char c;
    scanf("%d %c", &N, &c);
    for (int k = 0; k < N; ++k) {
        printf("%c", c);
    }
    printf("\n");
    for (int i = 1; i < round(N * 0.5) - 1; ++i) {
        printf("%c", c);
        for (int j = 0; j < N - 2; ++j) {
            printf(" ");
        }
        printf("%c\n", c);
    }
    for (int k = 0; k < N; ++k) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}