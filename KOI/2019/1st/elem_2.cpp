#include<iostream>
#include<string>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  string a;
  int n,i,j,sw;
  cin >> n;
  while(n--){
    cin >> a;
    string p,q;
    int size=a.size();
    i=0,sw=0;
    while(i<size-i-1){
      if(a[i]!=a[size-i-1]){
        sw=1;
        break;
      }
      i++;
    }
    if(sw==0){
      printf("0\n");
      continue;
    }
    int l=0,r=size-1;
    while(a[l]==a[r]){
      l++,r--;
    }
    for(int i=0;i<size;i++){
      if(i!=l) p+=a[i];
      if(i!=r) q+=a[i];
    }
    sw=0,i=0;
    while(i<p.size()-i-1){
      if(p[i]!=p[p.size()-i-1]){
        sw=1;
        break;
      }
      i++;
    }
    if(sw==0){
      printf("1\n");
      continue;
    }
    sw=0,i=0;
    while(i<q.size()-i-1){
      if(q[i]!=q[q.size()-i-1]){
        sw=1;
        break;
      }
      i++;
    }
    if(sw==0){
      printf("1\n");
    }
    else printf("2\n");
    /*for(int i=0;i<size;i++){
      sim=a.substr(0,i)+a.substr(i+1,size);
      sw=0,j=0;
      while(j<size-2-j){
        if(sim[j]!=sim[size-j-2]){
          sw=1;
          break;
        }
        j++;
      }
      if(sw==0){
        printf("1\n");
        break;
      }
    }*/
  }
}