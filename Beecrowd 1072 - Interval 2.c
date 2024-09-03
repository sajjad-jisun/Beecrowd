#include<stdio.h>
int main(){
    int t,counter1=0,counter2=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n>=10 && n<=20) counter1++;
        else counter2++;
    }
    printf("%d in\n",counter1);
    printf("%d out\n",counter2);
return 0;
}
 
