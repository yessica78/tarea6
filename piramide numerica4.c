#include <stdio.h>

int main ()
{
int i;
for(i = 1; i <= 5; i++)
{
int k;
for(k = 0; k < 11 - i; k++)
{
printf(".");
}

int j;
for(j = 0; j < i; j++)
{
printf("%d", i + j);
}

for(j -= 2; j >= 0; j--)
{
printf("%d", i + j);
}

printf("\n");
}

return 0;
}
