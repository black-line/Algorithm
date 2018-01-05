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
    int a;
    while (scanf("%d", &a) != -1) {
        int num = 0;
        int r[100];
        do {
            r[num++] = a % 8;
            a /= 8;
        } while (a != 0);
        for (int i = num - 1; i >= 0; --i) {
            printf("%d", r[i]);
        }
        printf("\n");
    }
    return 0;
}