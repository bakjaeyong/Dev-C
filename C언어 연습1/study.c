#include <stdio.h>

int main(void)
{
	int n = 756;
	scanf("%d",&n);
	
	int a=n/100;
	int b=(n-a*100)/10;
	int c=(n-a*100)-b*10;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	printf("\n%d\n",n/100);
	printf("%d\n",(n%100)/10);
	printf("%d\n",n%10);

}

