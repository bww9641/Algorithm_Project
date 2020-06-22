#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,k,a[100005]={},b[100005]={},i,j,mi,res,allmin;//b->k=2일때를 보기 위함
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(b,b+n);
	allmin=b[0];
	if(k==2)
	{
		mi=a[0];
		res=a[0];
		for(i=0;i<n-1;i++)
		{
			if(mi>a[i]) mi=a[i];
			for(j=i+1;j<n;j++)
			{
				b[j]=a[j];
			}
			sort(b+i+1,b+n);
			printf("first : %d second : %d\n",mi,b[i+1]);
			if(b[i+1]>mi)
			{
				if(res<b[i+1]) res=b[i+1];
			}
			else
			{
				if(res<mi) res=mi;
			}
		}
		printf("%d",res);
		return 0;
	}
	sort(a,a+n);
	if(k==1) printf("%d",a[0]);
	else printf("%d",a[n-1]);
	return 0;
}
