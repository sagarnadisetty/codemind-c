#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float d,r1,r2;
	printf("Enter coefficients (a,b,c) of the quadratic equation: \n ");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if (d>0) {
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("Roots are real and distinct:%.2f and %.2f\n",r1,r2);
	}else if(d==0){
		r1=r2=-b/(2*a);
		printf("Roots are real and repeated:%.2f\n",r1);
	}else{
		float realpart=-b/(2*a);
		float imaginarypart=sqrt(-d)/(2*a);
		printf("Roots are complex:%.2f+%.2fi and %.2f-%.2fi\n",realpart,imaginarypart,realpart,imaginarypart);
		}return 0;
}
