/*
 * Author: Zequn Wu
 * date: 9/26/18 2:15 PM
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
    char ip[100];
    while (scanf("%s", ip) != EOF) {
        int ans[100], num[100], num_len = 0, ans_len = 0;
        for (num_len = 0; num_len < strlen(ip); ++num_len) {
            num[num_len] = ip[num_len] - '0';
        }
        int i = 0;
        while (i < num_len) {
            ans[ans_len++] = num[num_len - 1] % 2;
            int flag = 0;
            for (int j = 0; j < num_len; ++j) {
                if (num[j] % 2 == 0) {
                    num[j] = (num[j] + flag) / 2;
                    flag = 0;
                } else {
                    num[j] = (num[j] + flag) / 2;
                    flag = 10;
                }
            }
            if (num[i] == 0) {
                i++;
            }
        }
        for (int k = ans_len - 1; k >= 0; --k) {
            printf("%d", ans[k]);
        }
        printf("\n");
    }
    return 0;
}
