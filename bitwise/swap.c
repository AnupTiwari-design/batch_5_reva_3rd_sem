#include<stdio.h>

int main(){
    int a=4;
    int b=5;
    a=a^b;
    b=a^b;
    a=a^b;

    printf("%d \n",a);
    printf("%d \n",b);
}