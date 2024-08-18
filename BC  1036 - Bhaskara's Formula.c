#include<stdio.h>
#include<math.h>

int main(){
   double A,B,C;
   scanf("%lf %lf %lf",&A,&B,&C);
   double det=B*B-4*A*C;
   double sqrt_det=sqrt(det);
   if(det<0 || A==0) printf("Impossivel calcular\n");
   else{
      printf("R1 = %.5f\n",(-B+sqrt_det)/(2*A));
      printf("R2 = %.5f\n",(-B-sqrt_det)/(2*A));
   }
	return 0;
}
