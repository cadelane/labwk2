#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Farenheit, Celsius;
    printf("Enter Farenheit: ");

    scanf("%f", &Farenheit);
    Celsius =(Farenheit-32)*5/9; //ORDER OF OPERATIONS!!!
    printf("Celsius: %.2f\n", Celsius);

    return 0;
}
