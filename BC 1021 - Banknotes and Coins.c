#include<stdio.h>
#include<math.h>

int main(){
	float n;
	scanf("%f",&n);
	int a;
	a=(int)n;
	float b;
	b=(n-a)*100;
	int x;
	x=(int)round(b);
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",a/100); a=a%100;
	printf("%d nota(s) de R$ 50.00\n",a/50); a=a%50;
	printf("%d nota(s) de R$ 20.00\n",a/20); a=a%20;
	printf("%d nota(s) de R$ 10.00\n",a/10); a=a%10;
	printf("%d nota(s) de R$ 5.00\n",a/5); a=a%5;
	printf("%d nota(s) de R$ 2.00\n",a/2); a=a%2;

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",a/1);
	printf("%d moeda(s) de R$ 0.50\n",x/50); x=x%50;
	printf("%d moeda(s) de R$ 0.25\n",x/25); x=x%25;
	printf("%d moeda(s) de R$ 0.10\n",x/10); x=x%10;
	printf("%d moeda(s) de R$ 0.05\n",x/5); x=x%5;
	printf("%d moeda(s) de R$ 0.01\n",x/1);


	return 0;
}
