#include<iostream>
using namespace std;
long long exp(int a, int n){
	long long p = a;
	if(n==1){
		return p;
	} 
	else if(n % 2 == 0){
		 p = a*a;
		while(n<0){
			p = p*p;
			n--;
		}
		return p;
	}else{
		 p = a*a*a;
		while(n<0){
			p = p*p;
			n--;
		}
		return p;
	}
}
int main() {
	int a, n;
	cin>>a>>n;
	cout<<exp(a,n);
	return 0;
}
