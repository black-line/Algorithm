/*
 * Author: Zequn Wu
 * date: 9/16/18 10:30 AM
 */

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
    freopen("../in.txt", "r", stdin);
    int h;
    while (scanf("%d", &h) != EOF) {
        int col = h + 2 * (h - 1);
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < col - (h + i * 2); ++j) {
                printf(" ");
            }
            for (int k = 0; k < h + i * 2; ++k) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
