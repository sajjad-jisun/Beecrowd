#include<stdio.h>
int main(){
    float a=1;
    for(float i=0;i<2.1; i+=0.2){
        for(float j=a;j<=a+2;j+=1){
            if(i==0 || i>1.9 || i==1.0) printf("I=%.0f J=%.0f\n",i,j);
            else printf("I=%.1f J=%.1f\n",i,j);
        }
    a+=.2;
    }
return 0;
}
 
