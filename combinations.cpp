#include<iostream>
using namespace std;
long double memoization[100][100];
int c(int n,int r){
	if(r == 0 || n == r){
		memoization[n][r] = 1;
		return 1;
	}
	else{
		if(memoization[n-1][r-1] == 0)
		memoization[n-1][r-1] = c(n-1,r-1);
		if(memoization[n-1][r] == 0)
		memoization[n-1][r] = c(n-1,r);
		return memoization[n-1][r-1] + memoization[n-1][r];
	}
}

int main(){
	int n,r;
	cin >> n >> r;
	cout << c(n,r) << "\n";	
}
