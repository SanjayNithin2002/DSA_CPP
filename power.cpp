#include<iostream>
using namespace std;

int power(int n,int r){
	if(r == 0)
	return 1;
	else
	return n * power(n,r-1);
}

int pow(int n,int r){
	if(r==0)
	return 1;
	if(r%2==0)
	return power(n*n,r/2);
	else
	return n * power(n*n,(r-1)/2);
}
int main(){
	int n,r;
	cin >> n >> r;
	cout << pow(n,r);
}
