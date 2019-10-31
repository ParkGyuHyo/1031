#include<stdio.h>

int main()
{
	int i, j, k, n;
	
	printf("삼각형의 길이 입력: ");
	scanf("%d", &n);

	for (i=n; i>=0; i--)
	{
		for (j=0; j<i; j++)
		{
			printf(" ");
		}
	    for (k=j; k<=n; k++){
	        printf("*");
	    }
		printf("\n");
	}
	return 0;
}
