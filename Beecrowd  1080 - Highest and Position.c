#include<stdio.h>
int main(){
    int array[100],x=0;
    for(int i=0;i<100;i++){
        scanf("%d",&array[i]);
    }
    int Highest_num=array[0];
    for(int j=1;j<100;j++){
        if(array[j]>Highest_num){   
            Highest_num=array[j];
            x=j;}
    }
    printf("%d\n%d\n",Highest_num,x+1);
return 0;
}
 
