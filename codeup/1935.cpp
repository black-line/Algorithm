/*
 * Author: Zequn Wu
 * date: 9/16/18 9:23 AM
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
    char id[100];
    char name[100];
    char gender[100];
    char age[100];
};

int main() {
    freopen("../in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) != EOF) {
        stu stus[1010];
        for (int i = 0; i < n; ++i) {
            scanf("%s%s%s%s", stus[i].id, stus[i].name, stus[i].gender, stus[i].age);
        }
        int m;
        scanf("%d", &m);
        while (m--) {
            char k[100];
            scanf("%s", k);
            int isExist = 0;
            for (int i = 0; i < n; ++i) {
                if (!strcmp(stus[i].id, k)) {
                    isExist = 1;
                    printf("%s %s %s %s\n", stus[i].id, stus[i].name, stus[i].gender, stus[i].age);
                    break;
                }
            }
            if (!isExist)printf("No Answer!\n");
        }
    }
    return 0;
}
