#include <stdio.h>

long faktoriyel(long number){
    if(number<=1)
        return 1;
    else
        return number*faktoriyel(number-1);
}

int main(void)
{

    printf("%d \n", faktoriyel(4));

    return 0;
}
