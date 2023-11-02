#include <stdio.h>
#include <stdlib.h>
int main()
{
     int age = 30;
     int *pAge = &age;

     printf("%p", *pAge); //%p memory adress btata hai
     printf("%d", *pAge); // %d it gives the value of pAge
     return 0;
}