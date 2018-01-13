//
// Created by jessy on 01/13/18.
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

const int maxn = 1010;

class JF {
public:
    int j, f;
    double rate;
} jf[maxn];

bool cmp(JF a, JF b) {
    return a.rate > b.rate;
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    int m, n;
    while (scanf("%d%d", &m, &n) && !(m == -1 && n == -1)) {
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &jf[i].j, &jf[i].f);
            jf[i].rate = (double) jf[i].j / jf[i].f;
        }
        sort(jf, jf + n, cmp);
        double maxJ = 0;
        for (int j = 0; j < n; ++j) {
            if (m > jf[j].f) {
                m -= jf[j].f;
                maxJ += jf[j].j;
            } else {
                maxJ += jf[j].rate * m;
                break;
            }
        }
        printf("%.3f\n", maxJ);
    }
    return 0;
}