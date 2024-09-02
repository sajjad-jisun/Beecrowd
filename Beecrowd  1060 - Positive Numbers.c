#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    int counter=0;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if(a>0) counter++;
    if(b>0) counter++;
    if(c>0) counter++;
    if(d>0) counter++;
    if(e>0) counter++;
    if(f>0) counter++;
    printf("%d valores positivos\n",counter);

return 0;
}
 
