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
    char name[100];
    char gender[100];
    int age;
};

int main() {
    int T1;
    scanf("%d", &T1);
    while (T1--) {
        Stu stu[22];
        int T2;
        scanf("%d", &T2);
        for (int i = 0; i < T2; ++i) {
            int id, age;
            char name[100], gender[100];
            cin >> id >> name >> gender >> age;
            strcpy(stu[id].name, name);
            strcpy(stu[id].gender, gender);
            stu[id].age = age;
        }
        int query;
        scanf("%d", &query);
        printf("%d %s %s %d\n", query, stu[query].name, stu[query].gender, stu[query].age);
    }
    return 0;
}