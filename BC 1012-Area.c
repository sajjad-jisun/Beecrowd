#include<stdio.h>
 int main(){
    double pi=3.14159, A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    printf("TRIANGULO: %.3lf\n",.5*A*C);
    printf("CIRCULO: %.3lf\n",pi*C*C);
    printf("TRAPEZIO: %.3lf\n",.5*(A+B)*C);
    printf("QUADRADO: %.3lf\n",B*B);
    printf("RETANGULO: %.3lf\n",A*B);

    return 0;
 }
