#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y){
    while(x%y != 0){
       x = x%y;
       return gcd(y,x);
    }
    return y;
}