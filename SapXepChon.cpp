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
void SapXepChon(int a[], int n){
	for(int i =0;i<n-1;i++){
		int i_min = i;
		int v_min = a[i];
		for(int j = i;j<=n-1;j++){
			if(v_min > a[j]){
				v_min = a[j];
				i_min = j;
			}
		}
		int doi = a[i];
		a[i] = a[i_min];
		a[i_min] = doi;
	}
	
}

int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	SapXepChon(a, n);
	xuat_mang(a,n);
	return 0;
}
