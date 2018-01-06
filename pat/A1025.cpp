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
    char id[13];
    int score, final_rank, location_number, local_rank;
} stu[30010];

bool cmp(Student a, Student b) {
    if (a.score != b.score)return a.score > b.score;
    else return strcmp(a.id, b.id) < 0;
}

int main() {
    int N, K, num = 0;
    scanf("%d", &N);
    for (int j = N; j > 0; --j) {
        scanf("%d", &K);
        num += K;
        for (int i = num - K; i < num; ++i) {
            scanf("%s%d", stu[i].id, &stu[i].score);
            stu[i].location_number = N - j + 1;
        }
        sort(stu + num - K, stu + num, cmp);
        stu[num - K].local_rank = 1;
        for (int m = 1; m < K; ++m) {
            if (stu[m + num - K].score != stu[m + num - K - 1].score) stu[m + num - K].local_rank = m + 1;
            else stu[m + num - K].local_rank = stu[m + num - K - 1].local_rank;
        }
    }
    printf("%d\n", num);
    sort(stu, stu + num, cmp);
    int r = 1;
    for (int n = 0; n < num; ++n) {
        if (n > 0 && stu[n].score != stu[n - 1].score) {
            r = n + 1;
        }
        printf("%s %d %d %d\n", stu[n].id, r, stu[n].location_number, stu[n].local_rank);
    }
    return 0;
}