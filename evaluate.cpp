#include<iostream>
#include<string>
using namespace std;

int Syracause(int n){
	if(n==1){
		return 1;
	}
	if(n%2==0){
		n = n / 2;
		cout << n << "\n";
		Syracause(n);
		return 0;
	}
	
	else{
		n = 3*n + 1;
		cout << n << "\n";
		Syracause(n);
		return 0;
	}
}


int main(){
	Syracause(22);
}
