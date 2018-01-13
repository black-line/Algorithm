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

class MoonCake {
public:
    double store, sell, price;
} cake[1010];

bool cmp(MoonCake a, MoonCake b) {
    return a.price > b.price;
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    int n, d;
    scanf("%d%d", &n, &d);
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &cake[i].store);
    }
    for (int j = 0; j < n; ++j) {
        scanf("%lf", &cake[j].sell);
        cake[j].price = cake[j].sell / cake[j].store;
    }
    sort(cake, cake + n, cmp);
    double sum;
    for (int k = 0; k < n; ++k) {
        if (d > cake[k].store) {
            sum += cake[k].sell;
            d -= cake[k].store;
        } else {
            sum += d * cake[k].price;
            break;
        }
    }
    printf("%.2f\n", sum);
    return 0;
}