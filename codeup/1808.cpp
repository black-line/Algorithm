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

bool isDelete(int i, char a[], char b[]) {
    int flag = 0;
    for (int j = 0; j < strlen(a); ++j) {
        if (abs(a[j] - b[i + j]) == ('a' - 'A') || abs(a[j] - b[i + j]) == 0) flag = 0;
        else {
            flag = 1;
            break;
        }
    }
    if (flag)return false;
    else return true;
}

int main() {
    char a[1000];
    gets(a);
    char b[1000];
    while (gets(b) != NULL) {
        int alen = strlen(a);
        if (alen > strlen(b)) {
            printf("%s", b);
        } else {
            int i = 0;
            while (i <= strlen(b) - alen) {
                if (isDelete(i, a, b)) {
                    i = i + alen;
                } else {
                    if (b[i] != ' ') {
                        printf("%c", b[i]);
                    }
                    i++;
                }
            }
            for (int j = strlen(b) - alen + 1; j < strlen(b); ++j) {
                printf("%c", b[j]);
            }
        }
        printf("\n");
    }
    return 0;
}