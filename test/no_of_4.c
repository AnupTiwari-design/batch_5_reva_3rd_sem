#include<stdio.h>

int main(){
    printf("enter a no=");
    int n;
    int c=0;
    scanf("%d",&n);
    while(n!=0){
        int d=n%10;
        if(d==4){c++;
        }
        n=n/10;
    }
    printf("%d",c);
}