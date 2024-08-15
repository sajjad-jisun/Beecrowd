#include<stdio.h>
 int main(){
    int a,b,x,y;
    float c,d;

    scanf("%d %d %f %d %d %f",&a,&b,&c,&x,&y,&d);
    printf("VALOR A PAGAR: R$ %.2f\n",b*c+y*d);

    return 0;
 }
