#include<stdio.h>
int main(){
    int a=7;
    for(int i=1;i<=9; i+=2){
        for(int j=a;j>=a-2;j-=1){
            printf("I=%d J=%d\n",i,j);
        }
    a+=2;
    }
return 0;
}
 
