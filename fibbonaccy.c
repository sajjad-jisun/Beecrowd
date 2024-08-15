// 0 1 1 2 3 5 8 13
#include<stdio.h>

int rec(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    if(n==2) return 2;
    return rec(n-2)+rec(n-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",rec(n));
    return 0;
}
