//
// Created by jessy on 03/27/18.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <utility>
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

set<int> list[60];

int main() {
    freopen("..\\in.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int m;
        scanf("%d", &m);
        while (m--) {
            int num;
            scanf("%d", &num);
            list[i].insert(num);
        }
    }
    int k;
    scanf("%d", &k);
    while (k--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int nc = 0, nt = 0;
        set<int>::iterator ita = list[a].begin(), itb = list[b].begin();
        for (; ita != list[a].end() && itb != list[b].end();) {
            if (*ita == *itb) {
                nc++;
                ita++;
                itb++;
            } else
                *ita < *itb ? ita++ : itb++;
        }
        nt = list[a].size() + list[b].size() - nc;
        double result = nc * 1.0 / nt * 100;
        printf("%.1f%%\n", result);
    }
    return 0;
}