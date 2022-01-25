#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b)
{
    int tempA = *a, tempB = *b;
    *a = *a + *b;
    *b = tempA - tempB;
    if (*b < 0)
    {
        *b = -1 * *b;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}