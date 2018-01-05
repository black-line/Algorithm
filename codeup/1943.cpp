//
// Created by jessy on 01/05/18.
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

bool isContinue(char s[]) {
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] != '0')return true;
    }
    return false;
}

int main() {
    char a[40];
    while (scanf("%s", a) != -1) {
        char b[1000];
        char s[1000];
        char r[1000];
        memset(r, 0, sizeof(r));
        memset(s, 0, sizeof(s));
        memset(b, 0, sizeof(b));
        strcpy(b, a);
        int y = 0, num1 = 0, num2 = 0;
        do {
            num1 = 0;
            y = 0;
            for (int i = 0; i < strlen(b); ++i) {
                if (y) {
                    if (((b[i] - '0') + 10) % 2) {
                        y = 1;
                        s[num1++] = ((b[i] - '0') + 10) / 2 + '0';
                    } else {
                        y = 0;
                        s[num1++] = ((b[i] - '0') + 10) / 2 + '0';
                    }
                } else {
                    if ((b[i] - '0') % 2) {
                        y = 1;
                        s[num1++] = ((b[i] - '0')) / 2 + '0';
                    } else {
                        y = 0;
                        s[num1++] = ((b[i] - '0')) / 2 + '0';
                    }
                }
            }
            r[num2++] = y + '0';
            memset(b, 0, sizeof(b));
            strcpy(b, s);
            memset(s, 0, sizeof(s));
        } while (isContinue(b));
        for (int j = strlen(r) - 1; j >= 0; --j) {
            printf("%c", r[j]);
        }
        printf("\n");
    }
    return 0;
}