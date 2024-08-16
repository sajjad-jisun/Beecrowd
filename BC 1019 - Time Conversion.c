#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int hour,min;

	if(N<3600) hour=0;
	else{
		hour=N/3600;
		N=N%3600;
		}
	if(N<60) min=0;
	else{
		min=N/60;
		N=N%60;
	}
	printf("%d:%d:%d\n",hour,min,N);

	return 0;
}
