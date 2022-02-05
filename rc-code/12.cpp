#include<iostream>
using namespace std;

int main(){
	int n,temp;
	cin >> n;
	int x;
	for(int t = 0;t < n;t++){
		cin >> x;
		int arr[2*x + 1][2*x+1];
		for(int i = 0; i < 2*x+1;i++){
			temp = 0;
			for(int j=0;j<2*x+1;j++){
				if(i + j + 1 > x + 1){
					temp++;
					arr[i][j] = arr[i][x-temp];
				}
				else{
					arr[i][j] = i + j + 1;
					temp=0;
				}
				
			}
		}
		for(int i = 0; i < 2*x+1;i++){
			for(int j=0;j<2*x+1;j++){
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}
}
