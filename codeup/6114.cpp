//
// Created by jessy on 03/26/18.
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

int hashName(char name[]) {
    int hashNum = 0;
    for (int i = 0; i < 3; ++i) {
        hashNum = hashNum * 26 + (name[i] - 'A');
    }
    hashNum = hashNum * 10 + name[3] - '0';
    return hashNum;
}

const int maxn = 26 * 26 * 26 * 10 + 1;
vector<int> stu[maxn];

int main() {
    freopen("..\\in.txt", "r", stdin);
    int N, K, hname;
    scanf("%d %d", &N, &K);
    char name[6];
    while (K--) {
        int courseId, stuNum;
        scanf("%d %d", &courseId, &stuNum);
        while (stuNum--) {
            scanf("%s", name);
            hname = hashName(name);
            stu[hname].push_back(courseId);
        }
    }
    while (N--) {
        scanf("%s", name);
        printf("%s", name);
        hname = hashName(name);
        printf(" %d", stu[hname].size());
        sort(stu[hname].begin(), stu[hname].end());
        for (vector<int>::iterator it = stu[hname].begin(); it != stu[hname].end(); ++it) {
            printf(" %d", *it);
        }
        if (N != 0)printf("\n");
    }
    return 0;
}