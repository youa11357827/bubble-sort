#include<stdio.h>
#include<stdlib.h>	

void main()
{
	int i, j, tmp,n,k;
	int s = 0;
	int a[100000];
	printf("請輸入排序的數字個數");
	scanf_s("%d", &n);
	printf("請輸入數字");
	for ( i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-1-i; j++)
		{
			if (a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		
		
		printf("Loop %d:", i);
		for ( j = 0; j < n; j++)
			printf("%4d", a[j]);
		
		printf("\n");
		for (j = 0; j < n; j++)
		{
			if (a[j + 1] > a[j])
			{
				s = s + 1;
			}
		}

		if (s == n - 1)
		{
			break;
		}
		s = 0;
	}
	system("pause");
}