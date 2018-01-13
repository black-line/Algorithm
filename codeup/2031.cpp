//
// Created by jessy on 01/11/18.
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

const int maxn = 510;

class GasStation {
public:
    double price;
    double distance;
} gs[maxn];

bool cmp(GasStation a, GasStation b) {
    return a.distance < b.distance;
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    double cmax, d, davg;
    int n;
    while (scanf("%lf%lf%lf%d", &cmax, &d, &davg, &n) != -1) {
        for (int i = 0; i < n; ++i) {
            scanf("%lf%lf", &gs[i].price, &gs[i].distance);
        }
        gs[n].distance = d;
        gs[n].price = 0;
        sort(gs, gs + n, cmp);
        if (gs[0].distance != 0) {
            printf("The maximum travel distance = 0.00\n");
        } else {
            int nowNum = 0;
            double cost = 0, nowTank = 0, MAX = cmax * davg;
            while (nowNum < n) {
                int lowestPriceNum = -1;
                double lowestPrice = INF;
                for (int i = nowNum + 1; i <= n && gs[i].distance - gs[nowNum].distance <= MAX; ++i) {
                    if (gs[i].price < lowestPrice) {
                        lowestPrice = gs[i].price;
                        lowestPriceNum = i;
                        if (lowestPrice < gs[nowNum].price) {
                            break;
                        }
                    }
                }
                if (lowestPriceNum == -1) break;
                double needOil = (gs[lowestPriceNum].distance - gs[nowNum].distance) / davg;
                if (lowestPrice < gs[nowNum].price) {
                    if (nowTank < needOil) {
                        cost += (needOil - nowTank) * gs[nowNum].price;
                        nowTank = 0;
                    } else {
                        nowTank -= needOil;
                    }
                } else {
                    cost += (cmax - nowTank) * gs[nowNum].price;
                    nowTank = cmax - needOil;
                }
                nowNum = lowestPriceNum;
            }
            if (nowNum == n) {
                printf("%.2f\n", cost);
            } else {
                printf("The maximum travel distance = %.2f\n", gs[nowNum].distance + MAX);
            }
        }
    }
    return 0;
}