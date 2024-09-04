#include<stdio.h>
int main(){
    int x,y,z;
    int Inter=0,Gremio=0,Draw=0;
    while(1){
        scanf("%d %d",&x,&y);
        if(x>y) Inter+=1;
        if(y>x) Gremio+=1;
        if(x==y) Draw+=1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&z);
        if(z==2) break;
    }
    printf("%d grenais\n",Inter+Gremio+Draw);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",Inter,Gremio,Draw);

    return 0;
}
 
