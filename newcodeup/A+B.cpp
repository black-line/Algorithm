//
// Filename: A+B.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=1
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

int str2int(char str[]) {
    int len = strlen(str), num = 0, num_digits = 0, r = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            num_digits++;
        }
    }
    for (int j = len - 1; j >= 0; --j) {
        if (str[j] >= '0' && str[j] <= '9') {
            num += (str[j] - '0') * pow(10, r++);
        }
    }
    if (str[0] == '-') {
        num = -1 * num;
    }
    return num;
}

int main() {
    freopen("../in.txt", "r", stdin);
    char str1[21], str2[21];
    while (scanf("%s%s", str1, str2) != EOF) {
        int num1 = str2int(str1), num2 = str2int(str2);
        printf("%d\n", num1 + num2);
    }
    return 0;
}