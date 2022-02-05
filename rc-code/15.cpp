#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x;
	for(int i =0;i < n;i++){
		cin >> x;
		int xr;
		int temp;
		for(int j=0;j<x;j++){
			if(i==0){
				cin >> xr;
			}
			else{
				cin >> temp;
				xr = xr ^ temp;
			}
		}
		cout << xr << "\n";
	}
}
