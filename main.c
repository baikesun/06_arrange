#include <stdio.h>

#define COUNT 10

int main()
{
	//���� ����
	 
	int data[COUNT];
	int i, j;
	int temp;
	
	//�Է°� �ޱ�
	 
	printf("���� 10���� �Է��Ͻÿ� : ");
	
	for(i=0; i<COUNT; i++)
	{
		scanf("%d", &data[i]);
	}
	
	//���
	 
	printf("\n\n���  : ");
	
	for(j=0; j<COUNT; j++)
	{
		printf("%d ", data[j]);
	}
	
	return 0;
}
