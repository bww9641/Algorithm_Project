#include<stdio.h>

int main()
{
	char a[30]="���ɰ�����";
	int sum=0;
	int k;
	for(int i=0;i<4;i++)
	{
		scanf("%d",&k);
		sum+=k;
	}
	printf("%c%c",a[sum*2],a[sum*2+1]);
	return 0;
}