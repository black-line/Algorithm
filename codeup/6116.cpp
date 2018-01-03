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

int road[1000010] = {0};

int main() {
    int T1;
    scanf("%d", &T1);
    int a;
    for (int i = 2; i <= T1; ++i) {
        scanf("%d", &a);
        road[i] = a + road[i - 1];
    }
    scanf("%d", &a);
    road[1] = road[T1] + a;
    //
    int T2;
    scanf("%d", &T2);
    for (int j = 0; j < T2; ++j) {
        int x, y, v1, v2;
        scanf("%d%d", &x, &y);
        v1 = abs(road[x] - road[y]);
        v2 = road[1] - v1;
        printf("%d\n", v1 > v2 ? v2 : v1);
    }
    return 0;
}