#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, x2, x3, x4, mean, variance;
    printf("enter 4 numbers:" )
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
    mean= (x1+x2+x3+x4)*1/3;
    variance=((x1-mean)*2+(x2-mean)*2+(x3-mean)*2+(x4-mean)*2)*1/3;
    printf("variance\n: " variance);

    return 0;
}
