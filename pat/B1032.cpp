/*
 * Author: Zequn Wu
 * date: 9/15/18 3:50 PM
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

const int maxn = 100010;
int s[maxn] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    scanf("%d", &N);
    while (N--) {
        int a, b;
        scanf("%d%d", &a, &b);
        s[a] += b;
    }
    int highestId = -1, highestScore = -1;
    for (int i = 0; i < maxn; ++i) {
        if (s[i] > highestScore) {
            highestId = i;
            highestScore = s[i];
        }
    }
    printf("%d %d", highestId, highestScore);
    return 0;
}
