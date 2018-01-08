//
// Created by jessy on 01/08/18.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
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

int C(int n) {
    if (n == 1)return 1;
    if (n == 2)return 2;
    return C(n - 1) + C(n - 2);
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) != -1) {
        printf("%d\n", C(n));
    }
    return 0;
}