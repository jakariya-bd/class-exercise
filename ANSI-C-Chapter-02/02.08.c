/*
I haven't understood this question.
Sorry :'(
*/

#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int sub(int a, int b)
{
    int dif = a - b; // note: a must be greater than or equals to b i.e. a >= b
    return dif;
}

int main()
{
    printf("%d + %d = %d\n", 20, 10, add(20, 10) );
    printf("%d - %d = %d\n", 20, 10, sub(20, 10) );

    return 0;
}
