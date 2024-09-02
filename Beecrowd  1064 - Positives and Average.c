#include<stdio.h>
int main(){
    float a,b,c,d,e,f,sum=0;
    int counter=0;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if(a>0){counter++; sum=sum+a;}
    if(b>0){counter++; sum=sum+b;}
    if(c>0){counter++; sum=sum+c;}
    if(d>0){counter++; sum=sum+d;}
    if(e>0){counter++; sum=sum+e;}
    if(f>0){counter++; sum=sum+f;}
    printf("%d valores positivos\n",counter);
    printf("%.1f\n",sum/counter);

return 0;
}
