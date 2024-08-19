#include<stdio.h>
int main(){
    float a;
scanf("%f",&a);
if(a>=0 && a<=400){
    printf("Novo salario: %.2f\n",a+a*0.15);
    printf("Reajuste ganho: %.2f\n",a*0.15);
    printf("Em percentual: %d %\n",15);
}
if(a>400 && a<=800){
    printf("Novo salario: %.2f\n",a+a*0.12);
    printf("Reajuste ganho: %.2f\n",a*0.12);
    printf("Em percentual: %d %\n",12);
}
if(a>800 && a<=1200){
    printf("Novo salario: %.2f\n",a+a*0.1);
    printf("Reajuste ganho: %.2f\n",a*0.1);
    printf("Em percentual: %d %\n",10);
}
if(a>1200 && a<=2000){
    printf("Novo salario: %.2f\n",a+a*0.07);
    printf("Reajuste ganho: %.2f\n",a*0.07);
    printf("Em percentual: %d %\n",7);
}
if(a>2000){
    printf("Novo salario: %.2f\n",a+a*0.04);
    printf("Reajuste ganho: %.2f\n",a*0.04);
    printf("Em percentual: %d %\n",4);
}
    return 0;
}
