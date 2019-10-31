#include<stdio.h>

int main()
{
	int loop_cnt, str_cnt, i, k;
	char str;
	
	printf("반복횟수 입력 : ");
	scanf("%d", &loop_cnt);
	
	for(i=0; i < loop_cnt; i++)
	{
		printf("문자와 횟수 입력 : ");
		scanf(" %c %d", &str, &str_cnt);
		
		for(k=0; k < str_cnt; k++)
			printf("%c ", str);

		printf("\n");
	}
	return 0;
} 
