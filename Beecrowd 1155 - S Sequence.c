#include<stdio.h>
#include<math.h>
int main(){
    double counter=0;
    for(double i=1;i<=100;i++){
        counter+=1/i;
    }
    double roundfig = round(counter*100);
    printf("%.2lf\n",roundfig/100);
    return 0;
}
 
