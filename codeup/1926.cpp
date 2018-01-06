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

class Student {
public:
    char id[20];
    char name[20];
    int score;
};

Student stu[100010];

bool cmp1(Student a, Student b) {

    return strcmp(a.id, b.id) < 0;
}

bool cmp2(Student a, Student b) {
    if (strcmp(a.name, b.name) == 0) {
        return strcmp(a.id, b.id) < 0;
    } else {
        return strcmp(a.name, b.name) < 0;
    }

}

bool cmp3(Student a, Student b) {
    if (a.score == b.score) {
        return strcmp(a.id, b.id) < 0;
    } else {
        return a.score < b.score;
    }
}

int main() {
    int n, c, no = 1;
    while (scanf("%d%d", &n, &c) && n) {
        for (int i = 0; i < n; ++i) {
            scanf("%s%s%d", stu[i].id, stu[i].name, &stu[i].score);
        }
        switch (c) {
            case 1:
                sort(stu, stu + n, cmp1);
                break;
            case 2:
                sort(stu, stu + n, cmp2);
                break;
            case 3:
                sort(stu, stu + n, cmp3);
                break;
        }
        printf("Case %d:\n", no);
        for (int j = 0; j < n; ++j) {
            printf("%s %s %d\n", stu[j].id, stu[j].name, stu[j].score);
        }
        no++;
    }
    return 0;
}