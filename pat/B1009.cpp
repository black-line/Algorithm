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


int main() {
    char si[100];
    char so[100][100];
    gets(si);
    int a = 0, b = 0;
    for (int i = 0; i < strlen(si); ++i) {
        if (si[i] != ' ') {
            so[a][b++] = si[i];
        } else {
            so[a][b] = '\0';
            a++;
            b = 0;

        }
    }
    for (int j = a; j >= 0; --j) {
        printf("%s", so[j]);
        if (j) printf(" ");
    }
    printf("\n");
    return 0;
}