#include <stdio.h>
#include <math.h>

int main()
{
    int Ax=3, Ay=4, Bx=-3, By=-4;
    float mesafe;

    mesafe = sqrt(pow((Ax-Bx),2)+pow((Ay-By),2));

    printf("%.2f \n", mesafe);

    return 0;
}
