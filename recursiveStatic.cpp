#include<iostream>
using namespace std;

int recursive(int n){
	static int x = 0;
	if(n > 0){
		x++;
		int temp =  x + recursive(n-1);
		x--;
		return temp;
	}
}

int main(){
	int a = 5;
	cout << recursive(5);
}
