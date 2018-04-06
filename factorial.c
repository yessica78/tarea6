#include <stdio.h>
#include <conio.h>

main ()
{
	int num,fact=1,n;
	printf("Introducir el número a calcular en factorial");
	scanf ("%d",&n);
	for (num=1;num<=n;num++)
	fact=fact*num;
	printf("\n El factorial del numero %d es %d",n,fact);
	getch();
}
