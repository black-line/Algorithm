//
// Created by jessy on 01/07/18.
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


int main() {
    //freopen("..\\in.txt", "r", stdin);
    char s1[10010];
    char s2[10010];
    while (gets(s1) != NULL) {
        gets(s2);
        int A[128] = {0};
        memset(A, 0, sizeof(A));
        for (int i = 0; i < strlen(s2); ++i) {
            A[(int) s2[i]] = 1;
        }
        for (int j = 0; j < strlen(s1); ++j) {
            if (!A[(int) s1[j]])printf("%c", s1[j]);
        }
        printf("\n");
    }
    return 0;
}