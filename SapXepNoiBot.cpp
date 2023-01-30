#include<iostream>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
}
void xuat_mang(int a[], int n){
	for(int i =0;i<n;i++){
		cout<<" "<<a[i];
	}
}
void SapXepNoiBot(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int doi =a[i];
				a[i]=a[j];
				a[j]=doi;
			}
		}
	}
	
}

int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	SapXepNoiBot(a, n);
	xuat_mang(a,n);
	return 0;
}
