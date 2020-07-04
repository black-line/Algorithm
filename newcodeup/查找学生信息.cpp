//
// Filename: 查找学生信息.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000576&pid=2
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

class stu {
public:
    char info[1000] = {'\0'};
};

stu stus[1010];

int main() {
    freopen("../in.txt", "r", stdin);
    int n, m;
    while (scanf("%d", &n) != EOF) {
        getchar();
        for (int i = 0; i < n; ++i) {
            gets(stus[i].info);
        }
        scanf("%d", &m);
        getchar();
        char info[1000];
        int found = 0;
        for (int j = 0; j < m; ++j) {
            gets(info);
            found = 0;
            for (int i = 0; i < n; ++i) {
                if (strncmp(stus[i].info, info, strlen(info)) == 0) {
                    puts(stus[i].info);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("No Answer!\n");
            }
        }
    }
    return 0;
}