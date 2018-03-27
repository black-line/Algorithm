//
// Created by jessy on 03/27/18.
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

vector<int> course[2510];

int s2i(const char name[]) {
    int num = 0;
    for (int i = 0; i < 3; ++i) {
        num = num * 26 + (name[i] - 'A');
    }
    num = num * 10 + (name[3] - '0');
    return num;
}

void i2s(int num, char name[]) {
    name[4] = '\0';
    name[3] = num % 10 + '0';
    name[2] = num / 10 % 26 + 'A';
    name[1] = num / 10 / 26 % 26 + 'A';
    name[0] = num / 10 / 26 / 26 + 'A';
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    int stn, ctn;
    scanf("%d %d", &stn, &ctn);
    while (stn--) {
        char sname[10];
        scanf("%s", sname);
        int cnum;
        scanf("%d", &cnum);
        while (cnum--) {
            int t;
            scanf("%d", &t);
            course[t].push_back(s2i(sname));
        }
    }
    for (int i = 1; i <= ctn; ++i) {
        printf("%d %d\n", i, course[i].size());
        sort(course[i].begin(), course[i].end());
        char sname[10];
        for (vector<int>::iterator it = course[i].begin(); it != course[i].end(); ++it) {
            i2s(*it, sname);
            printf("%s\n", sname);
        }
    }
    return 0;
}