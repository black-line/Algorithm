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


int main() {
    freopen("..\\in.txt", "r", stdin);
    int num[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", num + i);
    }
    for (int j = 1; j < 10; ++j) {
        if (num[j] != 0) {
            printf("%d", j);
            num[j]--;
            break;
        }
    }
    for (int k = 0; k < 10; ++k) {
        for (int i = 0; i < num[k]; ++i) {
            printf("%d", k);
        }
    }
    printf("\n");
    return 0;
}