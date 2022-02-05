#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a,b,c,d,e;
	for(int i =0;i<n;i++){
		cin >> a >> b >> c >> d >> e;
		long double arr[e];
		arr[0] = a;
		arr[1] = b;
		for(int i = 2; i < e;i++){
			if(i%2==0)
			arr[i] = arr[i-2] + c;
			else
			arr[i] = arr[i-2]*d;
		}
		for(int i =0;i < e;i++){
			cout << std::fixed;
			cout << arr[i] << " ";
		}
	}
}
