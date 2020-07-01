//
// Filename: A+B输入输出练习VIII.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000574&pid=7
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
    freopen("../in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, sum = 0, a;
        scanf("%d", &N);
        while (N--) {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
        if (T != 0) {
            printf("\n");
        }
    }
    return 0;
}