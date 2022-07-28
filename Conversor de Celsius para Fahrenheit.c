#include <stdio.h>
#include <stdlib.h>

//Faça um programa 
//para converter graus Celcius em Fahrenheit?
//F = C x 1,8 + 32
int main()
{
float c, f;
printf("informe a temperatura em graus Celsius:\n");
scanf("%f",&c);
f=((c*1.8)+32);
printf("sua temperatura em gaus Fahrenheit e:\n%.1f",f);
return 0;	
}