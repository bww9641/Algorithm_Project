#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a[20];
    for(int i=1;i<=118;i++){
        if(i%2){
            if(i%3){
                if(i%4){
                    if(i%5){
                        if(i%6){
                            if(i%7){
                                if(i%8){
                                    if(i%9){
                                        a[0].push_back(i);
                                    }
                                    else{
                                        a[1].push_back(i);
                                    }
                                }
                                else{
                                    a[2].push_back(i);
                                }
                            }
                            else{
                                a[3].push_back(i);
                            }
                        }
                        else{
                            a[4].push_back(i);
                        }
                    }
                    else{
                        a[5].push_back(i);
                    }
                }
                else{
                    a[6].push_back(i);
                }
            }
            else{
                a[7].push_back(i);
            }
        }
        else{
            a[8].push_back(i);
        }
    }
    for(int i=0;i<9;i++){
        cout << i << ": ";
        for(auto x: a[i]){
            cout << x%8 << ' ';
        }
        cout << '\n';
    }
    return 0;
}