#include<stdio.h>

int main()
{
	int loop_cnt, str_cnt, i, k;
	char str;
	
	printf("�ݺ�Ƚ�� �Է� : ");
	scanf("%d", &loop_cnt);
	
	for(i=0; i < loop_cnt; i++)
	{
		printf("���ڿ� Ƚ�� �Է� : ");
		scanf(" %c %d", &str, &str_cnt);
		
		for(k=0; k < str_cnt; k++)
			printf("%c ", str);

		printf("\n");
	}
	return 0;
} 
