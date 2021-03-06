/*
 * Author: Zequn Wu
 * date: 9/15/18 3:03 PM
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
    int N;
    scanf("%d", &N);
    while (N--) {
        int M;
        scanf("%d", &M);
        int sum = 0;
        for (int i = 0; i < M; ++i) {
            int tmp;
            scanf("%d", &tmp);
            sum += tmp;
        }
        printf("%d\n", sum);
    }
    return 0;
}
