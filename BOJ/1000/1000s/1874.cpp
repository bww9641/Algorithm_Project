#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
using namespace std;

int main()
{
  stack<int> s;
  string ans;
  int n,a[100005]={},cnt=1,cnt2=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  while(1)
  {
    if(s.empty())
    {
      s.push(cnt++);
      ans.append("+");
      continue;
    }
    else{
      int t=s.top();
      if(cnt==n+1)
      {
        while(!s.empty())
        {
          t=s.top();
          if(a[cnt2]==t)
          {
            ans.append("-");
            s.pop();
            cnt2++;
          }
          else
          {
            printf("NO");
            return 0;
          }
        }
        break;
      }
      if(a[cnt2]==t)
      {
        ans.append("-");
        s.pop();
        cnt2++;
      }
      else if(a[cnt2]>t)
      {
        s.push(cnt++);
        ans.append("+");
      }
      else
      {
        printf("NO");
        return 0;
      }
    }
  }
  for(int i=0;i<ans.size();i++)
    cout << ans.at(i) << "\n";
  return 0;
}