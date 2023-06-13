#include<stdio.h>
#include<math.h>

int main()
{
float a, b,c, delta,x1,x2;

scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

delta= (pow(b,2)-4*a*c);
x1=(-b + sqrt(delta))/(2*a) /*sqrt é uma função que calcula a raiz quadrada de um numero */
x2=(-b-sqrt(delta))/(2*a)

if (delta==0)
{
printf("raiz unica\n");
printf("x1=%.2f\n",x1);
}

else if(delta <0)
{
printf("raizes imaginarias\n");
}

else if(delta>0)
{
printf("x1=%.2f\n",x1);
printf("x2=%2f\n",x2);
}
return 0;

}