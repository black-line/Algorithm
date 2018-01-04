//
// Created by jessy on 01/04/18.
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

class Stu {
public:
    char id[100];
    char name[100];
    char gender[100];
    char age[100];
};

Stu stu[1010];

int main() {
    int T1;
    while (scanf("%d", &T1) != -1) {
        for (int i = 0; i < T1; ++i) {
            char id[100], name[100], gender[100], age[100];
            cin >> id >> name >> gender >> age;
            strcpy(stu[i].id, id);
            strcpy(stu[i].name, name);
            strcpy(stu[i].gender, gender);
            strcpy(stu[i].age, age);
        }
        int T2;
        scanf("%d", &T2);
        for (int j = 0; j < T2; ++j) {
            char query[100];
            scanf("%s", query);
            int i;
            for (i = 0; i < T1; ++i) {
                if (!strcmp(query, stu[i].id)) {
                    printf("%s %s %s %s\n", stu[i].id, stu[i].name, stu[i].gender, stu[i].age);
                    break;
                }
            }
            if (i == T1) printf("No Answer!\n");
        }
    }
    return 0;
}