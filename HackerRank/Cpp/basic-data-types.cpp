#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    scanf("%d %ld %c %3f %9lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%3f\n%9lf\n", a, b, c, d, e);
    return 0;
}