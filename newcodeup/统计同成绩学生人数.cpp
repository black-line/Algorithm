//
// Filename: 统计同成绩学生人数.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000576&pid=0
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

int stus[110] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N), N) {
        memset(stus, 0, sizeof(stus));
        int s = 0;
        for (int i = 0; i < N; ++i) {
            scanf("%d", &s);
            stus[s]++;
        }
        scanf("%d", &s);
        printf("%d\n", stus[s]);
    }
    return 0;
}