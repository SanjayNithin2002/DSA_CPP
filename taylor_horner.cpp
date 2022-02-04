#include<iostream>
using namespace std;

double taylor(int n,int r){
	static double p;
	if(r == 0)
	return 1.00;
	p = 1+n*p/r;
	return taylor(n,r-1);
}
int main(){
	int n,r;
	cin >> n >> r;
	cout << taylor(n,r);
}
