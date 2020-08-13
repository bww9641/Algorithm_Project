#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, num1, num2;
    cin >> a >> b >> c >> d;
    num1 = b; num2 = d;
    int cnt=0;
    while(num1!=0) {
        num1 /= 10;
        cnt++;
    }
    cout << cnt << "\n";
    num1 = pow(10, cnt);
    cnt=0;
    while(num2!=0) {
        num2 /= 10;
        cnt++;
    }
    num2 = pow(10, cnt);
    cout << num1 << ' ' << num2 << ' ' << num1+num2;
}