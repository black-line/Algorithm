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
    char s[100];
    while (gets(s) != NULL) {
        if (s[0] >= 'a' && s[0] <= 'z') {
            s[0] = s[0] - ('a' - 'A');
        }
        for (int i = 0; i < strlen(s); ++i) {
            if (s[i] == ' ' || s[i] == '\t' || s[i] == '\r' || s[i] == '\n') {
                if (s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                    s[i + 1] = s[i + 1] - ('a' - 'A');
                }

            }
        }
        puts(s);
    }
    return 0;
}