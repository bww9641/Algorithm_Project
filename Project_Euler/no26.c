#include<stdio.h>

int main()
{
  int n,remain[1005]={0},quotient[1005]={0},max=0,maxn=0; //1~1000까지의 정수인 n, 몫의 소수부분의 각 자리 숫자를 저장하는 quotient 배열, 계산 과정에서 나오는 각각의 나머지를 저장하는 remain 배열, 순환마디의 최대 길이와 그때의 n의 값을 저장하는 max,maxn을 선언한다.
  for(n=1;n<=1000;n++)
  {
    int tmp=1%n*10,idx=0,isset=0; //tmp : 정수부분까지 나누었을 때 남는 나머지를 10배하여 소수 부분을 구하는 나눗셈을 준비한다. idx : 현재 나눗셈의 소수점 자리 위치 isset : 각각의 n에 따라 순환소수 발견 여부를 저장
    while(isset==0) //각 단위분수를 소수로 나타내었을 때의 순환마디를 찾을 때까지 계속 돌린다.
    {
      quotient[idx]=tmp/n; //몫을 저장하는 배열에 소수부분의 각 자리 숫자를 대입한다.
      remain[idx]=tmp%n; //나눗셈에서 나오는 각각의 나머지를 순서대로 대입한다.
      for(int i=0;i<idx;i++)
      {
        if(remain[i]==remain[idx]&&quotient[i]==quotient[idx]) //현재 대입한 자리의 숫자와 이전의 숫자가 중복되고, 나머지도 이전과 동일하게 나왔을 때 순환마디가 구해진다.
        {
          //'-'으로 둘러 싸여 있는 부분은 1/n을 순환소수로 출력하고, 순환마디의 길이를 출력한 것이다. 이때 순환마디가 괄호 안의 숫자들이다. 이 부분이 없을 때 시스템 시간으로 약 46ms=0.046s가 걸린다.

          //------------------------------------------
          
          /*printf("NO.%d --> 1/%d = %d.",n,n,1/n); //n에 따라 단위분수 1/n의 정수부분을 출력
          for(int j=0;j<i;j++) printf("%d",quotient[j]); //순환마디에 포함되지 않는 소수부분 자리를 출력
          printf("(");
          for(int j=i;j<idx;j++) //이전에 중복된 부분부터 현재 위치의 바로 앞까지가 순환마디이므로 for문을 i부터 idx-1까지 돌림
          {
            printf("%d",quotient[j]); //순환마디의 각 자리 숫자를 출력
          }
          printf("), length : %d\n",idx-i); //순환마디의 길이는 현재 나눗셈하고 있는 위치 바로 앞에서 이전에 중복되는 자리까지의 길이이므로 (idx-1)-i+1=idx-i이다.
          */
          //------------------------------------------

          if(max<=idx-i) max=idx-i,maxn=n; //만약 순환마디의 길이가 현재 구한 최대 길이보다 크면 그 길이와 해당하는 n을 갱신한다.
          isset=1; //순환마디를 찾았을 때 while문을 빠져나가기 위한 스위치 역할임
          break; //순환마디를 찾았다면 더이상 찾지 않고 for문을 빠져나감.
        }
      }
      tmp=10*remain[idx]; //현재 위치에서 나온 나머지를 이용하여 다음 자리를 구하기 위해 10배하여 저장한다.
      idx++;
    }
  }
  printf("MAX NO : %d, LENGTH : %d",maxn,max); //순환마디가 가장 긴 단위분수의 n의 값과 그때의 순환마디의 길이를 출력한다. 따라서 26번의 답은 d=983이다.
  return 0;
}
