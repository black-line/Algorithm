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

bool isReplace(int i, char s[], char a[]) {
    int flag = 0;
    for (int j = 0; j < strlen(a); ++j) {
        if (a[j] != s[i + j]) {
            flag = 1;
            break;
        }
    }
    if (flag) return false;
    else return true;
}

int main() {
    char s[200];
    while (gets(s) != NULL) {
        char a[200], b[200];
        gets(a);
        gets(b);
        int i = 0, alen = strlen(a), slen = strlen(s);
        while (i <= slen - alen) {
            if (isReplace(i, s, a)) {
                printf("%s", b);
                i += alen;
            } else {
                printf("%c", s[i]);
                i++;
            }
        }
        for (int j = i; j < slen; ++j) {
            printf("%c", s[j]);
        }
        printf("\n");

    }
    return 0;
}