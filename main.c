#include <stdio.h>

#define COUNT 10

int main()
{
	//변수 선언
	 
	int data[COUNT];
	int i, j;
	int temp;
	
	//입력값 받기
	 
	printf("정수 10개를 입력하시오 : ");
	
	for(i=0; i<COUNT; i++)
	{
		scanf("%d", &data[i]);
	}
	
	//출력
	 
	printf("\n\n출력  : ");
	
	for(j=0; j<COUNT; j++)
	{
		printf("%d ", data[j]);
	}
	
	return 0;
}
