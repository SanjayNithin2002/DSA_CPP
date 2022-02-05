#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	long double res[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		res[i] = arr[i]*(arr[i] + 1)/2;
	}
	
	for(int i=0;i<n;i++){
		cout << std::fixed;
		cout << res[i]<< "\n";
	}
}
