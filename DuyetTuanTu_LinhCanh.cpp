#include<iostream>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
}
int KiemTraTuanTu(int a[], int n, int k){
	a[n] = k;
	int i=0;
	while(a[i] != k){
		i++;	
	}
	if(i < n) {
		return i;
	}
	else {
		return -1;	
	}
}
int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	cout<<KiemTraTuanTu(a, n, 9);
	return 0;
}
