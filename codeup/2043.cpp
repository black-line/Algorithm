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

struct Mouse {
    int weight;
    char color[20];
} mouse[200];

bool cmp(Mouse a, Mouse b) {
    return a.weight > b.weight;
}

int main() {
    int n;
    while (scanf("%d", &n) != -1) {
        for (int i = 0; i < n; ++i) {
            scanf("%d%s", &mouse[i].weight, mouse[i].color);
        }
        sort(mouse, mouse + n, cmp);
        for (int j = 0; j < n; ++j) {
            puts(mouse[j].color);
        }
    }
    return 0;
}