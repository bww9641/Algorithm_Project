/*#include<stdio.h>

int main()
{
  int n,remain[1005]={},quotient[1005]={},max=0,maxn=0;//1~1000������ ������ n, ���� �Ҽ��κ��� �� �ڸ� ����, ��� �������� ������ ������ �������� ��ȯ������ �ִ� ���̿� �׶��� n�� ���� �����ϴ� ������ �����Ѵ�.
  for(n=1;n<=1000;n++)
  {
    int tmp=1%n*10,idx=0,isset=0;
    while(1)
    {
      quotient[idx]=tmp/n;
      remain[idx]=tmp%n;
      for(int i=0;i<idx;i++)
      {
        if(remain[i]==remain[idx]&&quotient[i]==quotient[idx])
        {
          //�ּ��Ǿ� �ִ� �κ��� 1/n�� ��ȯ�Ҽ��� ����ϰ�, ��ȯ������ ���̸� ����� ���̴�. �̶� ��ȯ���� ��ȣ ���� �����̴�.

          printf("NO.%d --> 1/%d = %d.",n,n,1/n);
          for(int j=0;j<i;j++) printf("%d",quotient[j]);
          printf("(");
          for(int j=i;j<idx;j++)
          {
            printf("%d",quotient[j]);
          }
          printf("), length : %d\n",idx-i);

          if(max<idx-i) max=idx-i,maxn=n;
          isset=1;
          break;
        }
      }
      if(isset==1) break;
      tmp=10*remain[idx];
      idx++;
    }
  }
  printf("MAX NO : %d, LENGTH : %d",maxn,max);//��ȯ���� ���� �� �����м��� n�� ���� �׶��� ��ȯ������ ���̸� ����Ѵ�.
  return 0;
}
*/
/*#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<int> arr,int n)
{
    bool answer=true;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i+1){
            answer = false;
        }
    }
    return answer;
}

int main()
{
    vector<int> arr;
    cin>>arr;
}*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<string> arr;
    arr.push_back("Hello");
    arr.push_back("World");
    arr.push_back("BWW");
    cout << arr[0].c_str() << endl;
    cout << arr.size() << endl;
    return 0;
}
