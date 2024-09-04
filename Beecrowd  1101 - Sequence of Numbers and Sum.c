#include<stdio.h>
int main(){
    while(1){
    int M,N,Sum=0;
    scanf("%d %d",&M,&N);
    if(M<=0 || N<=0){break;}
    else if(M>N){
        for(int i=N;i<=M;i++){
            printf("%d ",i);
            Sum+=i;
        }
    }
    else if(N>M){
        for(int i=M;i<=N;i++){
            printf("%d ",i);
            Sum+=i;
        }
    }
    printf("Sum=%d\n",Sum);
    }
    return 0;
}
 
