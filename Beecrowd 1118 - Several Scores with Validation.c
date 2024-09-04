#include<stdio.h>
int main(){
    while(1){
        int X,Y;
        float a,b;

        scanf("%f",&a);
        while(1){
        if(a<0 || a>10){
            printf("nota invalida\n");
            scanf("%f",&a);
        }
        if(a>=0 && a<=10) break;
        }

        scanf("%f",&b);
        while(1){
        if(b<0 || b>10){
            printf("nota invalida\n");
            scanf("%f",&b);
        }
        if(b>=0 && b<=10) break;
        }

        printf("media = %.2f\n",(a+b)/2);

        while(1){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&X);
        if(X==2) return 0;
        if(X==1) break;
        }

    }
    return 0;
}
 
