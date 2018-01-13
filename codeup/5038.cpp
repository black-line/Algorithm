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

const int maxn = 5;

class Currency {
public:
    int currency = 0;
    int num = 0;
};

int main() {
    freopen("..\\in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) != -1) {
        Currency c[maxn];
        c[0].currency = 50;
        c[1].currency = 20;
        c[2].currency = 10;
        c[3].currency = 5;
        c[4].currency = 1;
        while (n) {
            if (n >= 50) {
                n -= 50;
                c[0].num++;
            } else if (n >= 20) {
                n -= 20;
                c[1].num++;
            } else if (n >= 10) {
                n -= 10;
                c[2].num++;
            } else if (n >= 5) {
                n -= 5;
                c[3].num++;
            } else {
                c[4].num += n;
                n -= n;
            }
        }
        bool flag = false;
        for (int i = 0; i < maxn; ++i) {
            if (c[i].num != 0) {
                if (flag) printf("+");
                printf("%d*%d", c[i].currency, c[i].num);
                flag = true;
            }
        }
        printf("\n");
    }
    return 0;
}