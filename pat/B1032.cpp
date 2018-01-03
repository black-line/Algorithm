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

int score[100010];

int main() {
    int T, i, v, maxI, maxV = 0;
    memset(score, 0, sizeof(score));
    scanf("%d", &T);
    for (int j = 1; j <= T; ++j) {
        scanf("%d%d", &i, &v);
        score[i] += v;
    }
    for (int k = 1; k <= T; ++k) {
        if (score[k] > maxV) {
            maxI = k;
            maxV = score[k];
        }
    }
    printf("%d %d\n", maxI, maxV);
    return 0;
}