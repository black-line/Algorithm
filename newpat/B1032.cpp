//
// Filename: B1032.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032
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

const int maxn = 100010;
int schoolScore[maxn] = {0};

int main() {
    freopen("../in.txt", "r", stdin);
    memset(schoolScore, 0, sizeof(schoolScore));
    int N, schID, schScore;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &schID, &schScore);
        schoolScore[schID] += schScore;
    }
    int id = 1, score = -1;
    for (int j = 1; j <= N; ++j) {
        if (schoolScore[j] > score) {
            score = schoolScore[j];
            id = j;
        }
    }
    printf("%d %d\n", id, score);
    return 0;
}