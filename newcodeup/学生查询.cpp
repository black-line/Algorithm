//
// Filename: 学生查询.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000576&pid=4
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
    int id, age;
    char name[20], gender[20];
};

stu stus[22];

int main() {
    freopen("../in.txt", "r", stdin);
    int m;
    while (scanf("%d", &m) != EOF) {
        while (m--) {
            int n;
            scanf("%d", &n);
            for (int i = 0; i < n; ++i) {
                scanf("%d %s %s %d", &stus[i].id, stus[i].name, stus[i].gender, &stus[i].age);
            }
            int x;
            scanf("%d", &x);
            for (int j = 0; j < n; ++j) {
                if (stus[j].id == x) {
                    printf("%d %s %s %d\n", stus[j].id, stus[j].name, stus[j].gender, stus[j].age);
                    break;
                }
            }
        }
    }
    return 0;
}