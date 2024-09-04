#include<stdio.h>
int main(){
    while(1){
    int X;
    scanf("%d",&X);
    if(X==0) break;
    for(int i=1;i<=X;i++){
        if(i==X) printf("%d",i);
        else printf("%d ",i);
    }
    printf("\n");

    }
    return 0;
}
