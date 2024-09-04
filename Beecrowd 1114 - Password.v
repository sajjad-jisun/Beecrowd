#include<stdio.h>
int main(){
    int Password=2002;
    while(1){
        int n;
        scanf("%d",&n);
        if(n==Password){
            printf("Acesso Permitido\n");
            break;
        }
        else printf("Senha Invalida\n");
    }
    return 0;
}
 
