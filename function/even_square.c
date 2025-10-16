#include<stdio.h>

 int even(int n){
    return n%2==0;

}
int square(int n){
    if(even(n))
    {
        return n*n;
    }
    return -1;
}

int main(){

    int n;
    scanf("%d",&n);
    printf("%d",square(n));
}