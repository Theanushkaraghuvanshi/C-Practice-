/* Arrays-->are used to store multiple values in a single variable instead of declaring separate variables for each value.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces:
int myNumbers[] = {25, 50, 75, 100}; */

#include<stdio.h>
#include<stdlib.h>
int main(){
    /* int luckyNums[]={22,2,3,4};
                   // 0 1 2 4 --> index position
    luckyNums[1]=34;
    printf("%d", luckyNums[1]); */

    int luckyNums[10];
    luckyNums[1]=33;
    luckyNums[10]=100;
    printf("%d", luckyNums[10]);
    return 0;
}