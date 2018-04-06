#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
float importeCompra,descuento;
int num, pctDescuento;
srand(time(NULL));
num=rand() % 8; // rango de valores
printf ("\n----------------------------------------------------");
switch(num)
{
case 0:
printf ("\nBolita de color negro");
descuento=10;
break;
case 1: printf ("\nBolita de color verde"); descuento=25;
break;
case 2: printf ("\nBolita de color amarillo"); descuento=50;
break;
case 3: printf ("\nBolita de color azul"); descuento=75;
break;
case 4: printf ("\nBolita de color rojo"); descuento=100;
break;
default:
descuento=0;
printf ("\n Sin descuento");
}
printf ("\n\nSu descuento es de %f porciento", descuento);
printf ("\n----------------------------------------------------");
printf ("\nImporte total de la compra (sin descuento): $ ");
scanf ("%4.2f", &importeCompra);
descuento = importeCompra * ( 1 - descuento / 100);
printf ("\nSu importe total de compra fue: %4.2f", importeCompra);
printf ("\nEl importe total con el descuento será¡ de: $ %.2f \n\n", descuento);
return 1;
}
