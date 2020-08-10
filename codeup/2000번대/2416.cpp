#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
  vector<string> a[155];
  string temp,k,res;
  int i,j,n,r=-1,female=0,male=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    cin >> temp;
    stringstream stream(temp);
    while(getline(stream,k,','))
    {
      a[i].push_back(k);
    }
  }
  cin >> res;
  for(i=0;i<n;i++)
  {
    if(a[i][0].compare(res)==0) r=i;
  }
  for(i=3;i<a[r].size();i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[r][i].compare(a[j][0])==0)
      {
        if(a[j][1].compare("F")==0) female++;
        else male++;
      }
    }
  }
  printf("%d\n%d",male,female);
  return 0;
}