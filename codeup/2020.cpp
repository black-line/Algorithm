/*
 * Author: Zequn Wu
 * date: 9/16/18 9:24 AM
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

class stu {
public:
    int id;
    char name[10];
    char gender[10];
    int age;
};

int main() {
    freopen("../in.txt", "r", stdin);
    int m;
    scanf("%d", &m);
    while (m--) {
        int n;
        scanf("%d", &n);
        stu stus[30];
        for (int i = 0; i < n; ++i) {
            scanf("%d%s%s%d", &stus[i].id, stus[i].name, stus[i].gender, &stus[i].age);
        }
        int k;
        scanf("%d", &k);
        for (int j = 0; j < n; ++j) {
            if (stus[j].id == k) {
                printf("%d %s %s %d\n", stus[j].id, stus[j].name, stus[j].gender, stus[j].age);
            }
        }
    }
    return 0;
}
