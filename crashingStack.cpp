#include<iostream>
using namespace std;

int infiniteFunc(int n){
    while(true){
        infiniteFunc(n-1);
        cout << 1;
    }
    
}
int main(){
    infiniteFunc(10);
    
}
