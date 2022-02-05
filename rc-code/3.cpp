#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int a,b;
	cin >> n;
	long double arr[n];
	for(int i=0; i < n; i++){
		cin >> a >> b;
		arr[i] = pow(a,b);
	}
	for(int i =0;i < n;i++){
		cout << std::fixed;
	    cout << arr[i]<< "\n";
	}
}
