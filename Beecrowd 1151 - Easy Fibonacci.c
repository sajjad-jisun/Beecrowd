#include<stdio.h>
int fib(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return fib(n-1)+fib(n-2);
    }
int main(){
    int X;
    scanf("%d",&X);
    for(int i=1;i<=X;i++){
        int n=i;
        if(i==X) printf("%d",fib(n));
        else printf("%d ",fib(n));
    }
    printf("\n");
    
    return 0;
}
 
