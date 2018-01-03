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


int main() {
    char str1[20], str2[20];
    int sum;
    while (scanf("%s%s", str1, str2) != -1) {
        sum = 0;
        for (int i = 0; str1[i] != '\0'; ++i) {
            for (int j = 0; str2[j] != '\0'; ++j) {
                sum += (str1[i] - '0') * (str2[j] - '0');
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}