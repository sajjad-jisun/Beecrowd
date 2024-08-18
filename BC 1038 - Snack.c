#include<stdio.h>
int main(){
   int X,Y;
   scanf("%d %d",&X,&Y);
   float Price;
   if(X==1) Price=4;
   else if(X==2) Price=4.5;
   else if(X==3) Price=5;
   else if(X==4) Price=2;
   else if(X==5) Price=1.5;
   printf("Total: R$ %.2f\n",Y*Price);
}
