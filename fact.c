#include <stdio.h>

int main()
{
	long fact = 1;
	int i, n;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		fact *= i;
		printf("%d * ", i);
	}
		
	printf("\b\b= %d", fact);
	
	return 0;
}
