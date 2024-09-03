#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    if(X%2==0){
    for(int i=X+1;i<=X+12;i=i+2){
        printf("%d\n",i);
        }
    }
    if(X%2!=0){
    for(int i=X;i<=X+11;i=i+2){
        printf("%d\n",i);
        }
    }
return 0;
}
