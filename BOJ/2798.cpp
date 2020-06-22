#include<stdio.h>
#include<math.h>
int main()
{
  int n,m,arr[105]={},min=1000000001;
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      for(int k=0;k<n;k++)
      {
        if(i==j||j==k||k==i) continue;
        if(abs(m-arr[i]-arr[j]-arr[k])<abs(m-min)&&m>=arr[i]+arr[j]+arr[k]) min=arr[i]+arr[j]+arr[k];
      }
  printf("%d",min);
  return 0;
}