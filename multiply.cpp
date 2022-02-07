#include<iostream>
using namespace std;

int multiply(int a,int b){
	if(b == 1)
	return a;
	return a + multiply(a,--b);
}
int main(){
	cout << multiply(9,12);
}
