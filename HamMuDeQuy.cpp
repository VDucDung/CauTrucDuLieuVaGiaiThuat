#include<iostream>
using namespace std;
long long exp(int a, int n){
	if(n==0) return 1;
	return a * exp(a,n-1);
}
int main() {
	int a, n;
	cin>>a>>n;
	cout<<exp(a,n);
	return 0;
}
