#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void print_vector(vector<T>& vec) {
  for(typename vector<T>::iterator itr=vec.begin();itr!=vec.end();++itr){
    cout<<*itr<<endl;
  }
}

int main()
{
  vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);


  for(vector<int>::iterator itr=vec.begin();itr!=vec.end();++itr){
    cout<<*itr<<endl;
  }
  vector<int>::iterator itr = vec.begin()+2;
  cout<<"3��° ���� :: "<<*itr<<endl;

  cout<< "ó�� ���� ����" << endl;
  print_vector(vec);
  cout << "--------------------------------" << endl;

  //vec[2]�տ� 15 �߰�
  vec.insert(vec.begin()+2,15);
  print_vector(vec);

  cout << "--------------------------------" << endl;
  //vec[3] ����
  vec.erase(vec.begin()+3);
  print_vector(vec);
}
