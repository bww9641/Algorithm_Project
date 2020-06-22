/*#include<stdio.h>

int main()
{
  int n,remain[1005]={},quotient[1005]={},max=0,maxn=0;//1~1000까지의 정수인 n, 몫의 소수부분의 각 자리 숫자, 계산 과정에서 나오는 각각의 나머지와 순환마디의 최대 길이와 그때의 n의 값을 저장하는 변수를 선언한다.
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
          //주석되어 있는 부분은 1/n을 순환소수로 출력하고, 순환마디의 길이를 출력한 것이다. 이때 순환마디가 괄호 안의 숫자이다.

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
  printf("MAX NO : %d, LENGTH : %d",maxn,max);//순환마디가 가장 긴 단위분수의 n의 값과 그때의 순환마디의 길이를 출력한다.
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
