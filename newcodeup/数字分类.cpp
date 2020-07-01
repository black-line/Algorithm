//
// Filename: 数字分类.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=6
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

const int maxn = 1000;
int nums[maxn] = {0};
double ans[5] = {0.0};
int anum[5] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N) != EOF) {
        memset(ans, 0, sizeof(ans));
        memset(anum, 0, sizeof(anum));
        for (int i = 0; i < N; ++i) {
            scanf("%d", &nums[i]);
        }
        int a2sign = 1;
        for (int k = 0; k < N; ++k) {
            //A1
            if (nums[k] % 5 == 0 && nums[k] % 2 == 0) {
                anum[0]++;
                ans[0] += nums[k];
            } else if (nums[k] % 5 == 1) {
                anum[1]++;
                ans[1] += nums[k] * a2sign;
                a2sign *= -1;
            } else if (nums[k] % 5 == 2) {
                anum[2]++;
                ans[2]++;
            } else if (nums[k] % 5 == 3) {
                ans[3] += nums[k];
                anum[3]++;
            } else if (nums[k] % 5 == 4) {
                if (nums[k] > ans[4]) {
                    anum[4]++;
                    ans[4] = nums[k];
                }
            }
        }
        ans[3] = (double) ans[3] / (double) anum[3];
        for (int j = 0; j < 5; ++j) {
            if (anum[j] == 0) {
                printf("N");
            } else {
                if (j == 3) {
                    printf("%.1f", ans[j]);
                } else {
                    printf("%d", (int) ans[j]);
                }
            }
            if (j != 4)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}