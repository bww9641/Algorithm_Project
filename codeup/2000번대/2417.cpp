#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

bool comp(const pair<int,string>&a,const pair<int,string>&b)
{
  if(a.first==b.first) return a.second<b.second;
  return a.first>b.first;
}


int main()
{
  vector<string> a[155];
  pair<int , string> check[155]={};
  string temp,k,res;
  int i,j,n,r=-1,female=0,male=0,t;
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
  for(i=0;i<n;i++)
  {
    for(j=3;j<a[i].size();j++)
    {
      for(t=0;t<n;t++)
      {
        if(a[i][j].compare(a[t][0])==0&&a[i][1].compare(a[t][1])!=0) check[t].first++,check[t].second=a[t][0];
      }
    }
  }
  sort(check,check+n,comp);
  int mx=check[0].first;
  for(i=0;i<n;i++)
  {
    if(mx==check[i].first)
      cout << check[i].second << endl;
  }
  return 0;
}