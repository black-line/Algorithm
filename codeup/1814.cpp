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
    int L, M, a, b;
    while (scanf("%d%d", &L, &M) && !(L == 0 && M == 0)) {
        int count = 0;
        int road[L + 1];
        memset(road, 0, sizeof(road));
        for (int i = 0; i < M; ++i) {
            scanf("%d%d", &a, &b);
            for (int j = a; j <= b; ++j) {
                road[j] = 1;
            }
        }
        for (int k = 0; k <= L; ++k) {
            if (road[k] == 0) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}