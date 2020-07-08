//
// Filename: 进制转换.cpp
// Author: Zequn Wu
// Date: 8/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000579&pid=2
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

const int maxn = 100;
char str[maxn];

int main() {
    freopen("../in.txt", "r", stdin);
    while (scanf("%s", str) != EOF) {
        int len = strlen(str);
        int input[maxn] = {0}, output[maxn] = {0}, outputidx = 0;
        for (int i = 0; i < len; ++i) {
            input[i] = str[i] - '0';
        }
        for (int j = 0; j < len;) {
            output[outputidx++] = input[len - 1] % 2;
            for (int i = 0; i < len; ++i) {
                if (input[i] % 2 == 0) {
                    input[i] /= 2;
                } else if (input[i] % 2 == 1) {
                    input[i] /= 2;
                    if (i != len - 1) {
                        input[i + 1] += 10;
                    }
                }
            }
            if (input[j] == 0) {
                j++;
            }
        }
        for (int k = outputidx - 1; k >= 0; --k) {
            printf("%d", output[k]);
        }
        printf("\n");

    }
    return 0;
}