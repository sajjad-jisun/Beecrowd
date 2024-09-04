#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int X,Y,sum=0;
        scanf("%d %d",&X,&Y);
        if(X>Y){
            int temp=X;
            X=Y;
            Y=temp;
        }
        if(X%2==0){
            for(int i=X+1;i<Y;i+=2) sum+=i;
        }
        else{
            for(int i=X+2;i<Y;i+=2) sum+=i;
        }
    printf("%d\n",sum);
    }
    return 0;
}
 
