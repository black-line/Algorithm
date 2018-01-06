//
// Created by jessy on 01/06/18.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
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

struct Student {
    char id[30];
    int score;

    Student() {
        score = 0;
    }
} stu[1010];

bool cmp(Student a, Student b) {
    if (a.score != b.score) {
        return a.score > b.score;
    } else {
        return strcmp(a.id, b.id) < 0;
    }
}

int main() {
    int n, m, g;
    while (scanf("%d%d%d", &n, &m, &g) && n) {
        int problemScore[20];
        for (int i = 1; i <= m; ++i) {
            scanf("%d", problemScore + i);
        }
        for (int j = 0; j < n; ++j) {
            int solveProblemNumber;
            scanf("%s", stu[j].id);
            scanf("%d", &solveProblemNumber);
            while (solveProblemNumber--) {
                int problemId;
                scanf("%d", &problemId);
                stu[j].score += problemScore[problemId];
            }
        }
        sort(stu, stu + n, cmp);
        int num = 0;
        for (int k = 0; k < n; ++k) {
            if (stu[k].score >= g) {
                num++;
            } else {
                break;
            }
        }
        printf("%d\n", num);
        for (int l = 0; l < num; ++l) {
            printf("%s %d\n", stu[l].id, stu[l].score);
        }
    }
    return 0;
}