#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>


int main()
{
    char name[32];
    int principle;
    double rate;
    int years;
    int period;


    float total {principle};
    printf("%s", "Enter your name: \n");
    scanf("%s",name );
   // printf(name, "Hello, %s ");

    printf("%s", "Enter the principal amount: \n");
    scanf("%d",&principle );
    // printf("%s", "The compound interest for a principal of ...");

    printf("%s", "Enter the rate of interest (in percentage): \n");
    scanf("%lf", &rate );
    // printf("%s", " at a rate of ...");

    printf("%s", "Enter the number of years:  \n");
    scanf("%d", &years );

    printf("%s", "Enter the number of times\n");
    scanf("%d", &period );
    // printf("%s", "  compounded ... times a year ");
    total = principle* pow((1 + rate/100/period), period*years) ;


    printf("Hello, %s \n", name);
    printf("The compound interest for a principal of %d at a rate of %lf compounded %d times a year for %d years is %f \n", principle,rate,period,years, total-period);
    printf( "The total amount after 3 years is: %f",total);


 
    // printf("%s", "  for ... years is: ...");
    // printf("%s", "The total amount after .. years is: ...");

    return 0;
}