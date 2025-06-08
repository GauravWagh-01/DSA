#include <stdio.h>
int sub(int a, int b)
{

    return a - b;
}
void main()
{
    int a = 5;
    int b = 6;
    int c = sub(a, b);
    printf("%d", c);
}