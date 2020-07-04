//
// Filename: 找x.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000576&pid=1
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

const int maxn = 210;
int nums[maxn] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) != EOF) {
        memset(nums, 0, sizeof(nums));
        for (int i = 0; i < n; ++i) {
            scanf("%d", nums + i);
        }
        int x, found = 0;
        scanf("%d", &x);
        for (int j = 0; j < n; ++j) {
            if (x == nums[j]) {
                printf("%d\n", j);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d\n", -1);
        }
    }
    return 0;
}