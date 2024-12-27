//Easy: Challenge 2
/* C Data-types
Write a program that declares and initializes variables of the following data types: int, float, char, and double. 
Then, print the value and size (in bytes) of each variable using the sizeof operator.*/

#include <stdio.h>

int main() {
    int a = 123;
    float b = 123.4;
    double c = 123.456678;
    char d = 'D';

    printf("Value:%d, Sizeof int:%lu bytes\n",a,sizeof(a));
    printf("Value:%f, Sizeof float:%lu bytes\n",b,sizeof(b));
    printf("Value:%lf, Sizeof double:%lu bytes\n",c,sizeof(c));
    printf("Value:%c, Sizeof char:%lu bytes\n",d,sizeof(d));
}