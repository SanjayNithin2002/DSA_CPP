#include<iostream>
using namespace std;

int fibonacci(int n){
	static int f[50];
	if(n <= 1){
		f[n] = n;
		return n;
	}
	else{
		if(f[n-1] == 0)
		f[n-1] = fibonacci(n-1);
		if(f[n-2] == 0)
		f[n-2] = fibonacci(n-2);
		return f[n-1] + f[n-2];
	}
}
int main(){
	cout << fibonacci(50);
}
//this approach is called memoization -> storing results to use them later.
