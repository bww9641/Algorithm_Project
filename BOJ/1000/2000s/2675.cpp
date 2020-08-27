#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t,i,j;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    string str;
    cin>>n>>str;
    for(i=0;i<str.size();i++)
      for(j=0;j<n;j++)
        printf("%c",str[i]);
    printf("\n");
  }
  return 0;
}
