#include<iostream>
using namespace std;

int taylor(int n,int r){
	static int p = 1;
	double res;
	if(r == 0)
	return 1;
	res = taylor(n,r-1);
	return 1 + n/r * res;
}
int main(){
	int n,r;
	cin >> n >> r;
	cout << taylor(n,r);
}
