#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string numberFormat(int n){
	static string str = "";
	static int key = 0;
	if(n == 0){
		reverse(str.begin(),str.end());
		return "";
	}
	else{
		if(key==3){
		key = 0;
		return "," + numberFormat(n);
	    }
		int r = n%10;
		n = (int) n /10;
		char c = '0' + r;
		key++;
		return c + numberFormat(n);
	}
}
int main(){
	string str = numberFormat(100000000);
	reverse(str.begin(),str.end());
	cout << str;
}
