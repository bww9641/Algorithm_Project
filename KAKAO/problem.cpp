//#1
/*#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 10000;
    vector<string> v[1005];
    
    for(int i=1;i<=s.length();i++)
    {
      for(int j=0;j<s.length();j+=i)
      {
        string tmp="";
        for(int k=j;k<j+i;k++)
        {
          if(k==s.length()) break;
            tmp+=s[k];
        }
        //cout << "tmp : " << tmp << endl;
        v[i].push_back(tmp);
      }
    }
    for(int i=1;i<=s.length();i++)
    {
      int cnt=1,res=0;
      if(v[i].size()==1)
      {
        res=v[i][0].size();
      }
      else
      {
        for(int j=1;j<v[i].size();j++)
        {
          //cout << v[i][j] << ","<<v[i][j-1] << endl;
          if(v[i][j].compare(v[i][j-1])==0)
          {
            //cout << "check" << endl;
            cnt++;
          }
          else
          {
            if(cnt==1) res+=v[i][j-1].length();
            else
            {
              string t=to_string(cnt);
              res+=v[i][j-1].length()+t.length();
            }
            cnt=1;
          }
        }
        if(cnt==1) res+=v[i][v[i].size()-1].length();
        else
        {
          string t=to_string(cnt);
              res+=v[i][v[i].size()-1].length()+t.length();
        }
      }
      
      //cout << "res : " << res << endl;
      if(answer>res) answer=res;
      //cout << endl;
    }
    return answer;
}

int main()
{
  string s;
  cin >> s;
  cout << solution(s) << endl;
  return 0;
}
*/
//#2
/*#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string p) {
    string answer = "";
    if(p.size()==0) return "";
    string u,v;
    int left=0,right=0,i,j;
    for(i=0;i<p.size();i++)
    {
        u+=p[i];
        if(p[i]=='(') left++;
        else right++;
        if(left==right) break;
    }
    for(j=i+1;j<p.size();j++) v+=p[j];
    //cout << "u : " << u << " v : " << v << endl;
    bool sw=true;
    int t=0;
    for(i=0;i<u.size();i++)
    {
      if(u[0]==')'&&u[u.length()]=='(')
      {
        sw=false;
        break;
      }
      if(u[i]=='(') t++;
      else
      {
        t--;
        if(t<0)
        {
          sw=false;
          break;
        }
      }
    }
    if(sw)
    {
      return answer=u+solution(v);
    }
    else
    {
      string tmp=solution(v);
      string ut=u;
      ut.erase(0,1);
      ut.erase(ut.size()-1,1);
      for(i=0;i<ut.size();i++)
      {
        if(ut[i]=='(') ut[i]=')';
        else ut[i]='(';
      }
      answer="(";
      answer+=tmp;
      answer+=")";
      answer+=ut;
    }
    return answer;
}

int main()
{
  string p;
  cin >> p;
  cout << solution(p) << endl;
  return 0;
}*/
//#4
/*#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

vector<int> answer;

void solution(vector<string> words, vector<string> queries) {
    int res;
    for(int i=0;i<queries.size();i++)
    {
      res=0;
      int sw=0,start,cnt=0,len=queries[i].length();
      for(int j=0;j<len;j++)
      {
        if(queries[i][j]=='?'&&sw==0) start=j,sw=1;
        if(queries[i][j]=='?') cnt++;
      }
      queries[i].erase(start,cnt);
      int k;
      if(start==0) k=cnt;
      else k=0;
      for(int j=0;j<words.size();j++)
      {
        if(len!=words[j].length())
        {
          printf("len : %d ",len);
          cout << queries[i] << " ";
          cout << words[j] << "에서 ";
          printf("continue당함\n");
          continue;
        }
        if(words[j].find(queries[i],k)!=string::npos)
        {
          res++;
        }
      }
      answer.push_back(res);
    }
}

int main()
{
  int n,m;
  string k;
  vector<string> w;
  vector<string> q;
  cin >> n >> m;
  for(int i=0;i<n;i++)
  {
    cin >> k;
    w.push_back(k);
  }
  for(int i=0;i<m;i++)
  {
    cin >> k;
    q.push_back(k);
  }
  solution(w,q);
  for(int i=0;i<m;i++)
  {
    cout << answer[i] << " ";
  }
  return 0;
}*/
//#3
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

/*bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
    int newarray[25][25];
    int n=key.size();
    int m=lock.size();
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<m+n-1;j++)
        {
            for(int k=0;j<=m+n-1;j++)
            {
                for(int p=j-n+1;p<=j;p++)
                {
                    for(int q=k-n+1;q<=k;q++)
                    {
                        if(p<0||p>=m||q<0||q>=m) continue;
                        lock[p][q]+=key[p][q];
                    }
                }
                int sw=0;
                for(int p=0;p<m;p++)
                {
                    for(int q=0;q<m;q++)
                    {
                        if(lock[p][q]!=1) sw=1;
                    }
                }
                if(sw==0)
                {
                    return true;
                }
                for(int p=j-n+1;p<=j;p++)
                {
                    for(int q=k-n+1;q<=k;q++)
                    {
                        if(p<0||p>=m||q<0||q>=m) continue;
                        lock[p][q]-=key[p][q];
                    }
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=n-1;k>=0;k--)
            {
                newarray[k][j]=key[j][k];
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                key[j][k]=newarray[j][k];
            }
        }
    }
    return false;
}*/

int main()
{
  int n,m,key[25][25]={},lock[25][25]={};
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&key[i][j]);
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%d",&lock[i][j]);
    }
  }
  int newarray[25][25];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<m+n-1;j++)
        {
            for(int k=0;k<=m+n-1;k++)
            {
                for(int p=j-n+1;p<=j;p++)
                {
                    for(int q=k-n+1;q<=k;q++)
                    {
                        printf("p : %d q : %d\n",p,q);
                        if(p<0||p>=m||q<0||q>=m) continue;
                        lock[p][q]+=key[p][q];
                    }
                }
                printf("lock\n");
                for(int p=0;p<m;p++)
                {
                    for(int q=0;q<m;q++)
                    {
                        printf("%d ",lock[p][q]);
                    }
                    printf("\n");
                }
                int sw=0;
                for(int p=0;p<m;p++)
                {
                    for(int q=0;q<m;q++)
                    {
                        if(lock[p][q]!=1) sw=1;
                    }
                }
                if(sw==0)
                {
                    printf("true");
                    return 0;
                }
                for(int p=j-n+1;p<=j;p++)
                {
                    for(int q=k-n+1;q<=k;q++)
                    {
                        if(p<0||p>=m||q<0||q>=m) continue;
                        lock[p][q]-=key[p][q];
                    }
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=n-1;k>=0;k--)
            {
                newarray[j][n-1-k]=key[k][j];
            }
        }
        printf("\n");
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                key[j][k]=newarray[j][k];
                printf("%d ",key[j][k]);
            }
            printf("\n");
        }
    }
    printf("false");
    return 0;
}