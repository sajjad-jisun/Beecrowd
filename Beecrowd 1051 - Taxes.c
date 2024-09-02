#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a>=0 && a<=2000) printf("Isento\n");
    if(a>=2000.01 && a<=3000) printf("R$ %.2f\n",(a-2000)*0.08);
    if(a>=3000.01 && a<=4500) printf("R$ %.2f\n",1000*.08+(a-3000)*0.18);
    if(a>4500) printf("R$ %.2f\n",1000*.08+1500*0.18+(a-4500)*0.28);

    return 0;
}
 
