#include<stdio.h>
int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    if(start==end) printf("O JOGO DUROU 24 HORA(S)\n");
    if(start>end) printf("O JOGO DUROU %d HORA(S)\n",(24-start)+end);
    if(start<end) printf("O JOGO DUROU %d HORA(S)\n",end-start);
    return 0;
}
