//
// Created by jessy on 01/03/18.
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

void strtoint(char str[], int &x) {
    if (str[0] == '-') {
        for (int i = 1; str[i] != '\0'; ++i) {
            if (str[i] != ',') x = 10 * x + str[i] - '0';
        }
        x *= -1;
    } else {
        for (int i = 0; str[i] != '\0'; ++i) {
            if (str[i] != ',') x = 10 * x + str[i] - '0';
        }
    }


}

int main() {
    int a, b;
    char str1[20], str2[20];
    while (scanf("%s%s", str1, str2) != -1) {
        a = b = 0;
        strtoint(str1, a);
        strtoint(str2, b);
        printf("%d\n", a + b);
    }
    return 0;
}