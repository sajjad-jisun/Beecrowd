#include<stdio.h>
int main(){
    int t,c=0,r=0,s=0;
    scanf("%d",&t);
    while(t--){
        int num;
        char charr;
        scanf("%d %c",&num,&charr);
        if(charr=='C') c+=num;
        if(charr=='R') r+=num;
        if(charr=='S') s+=num;
    }
    int sum=c+r+s;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",(c*100.0)/sum);
    printf("Percentual de ratos: %.2f %%\n",(r*100.0)/sum);
    printf("Percentual de sapos: %.2f %%\n",(s*100.0)/sum);


return 0;
}
 
