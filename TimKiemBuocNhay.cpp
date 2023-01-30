#include<iostream>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
}
int TimKiemBuocNhay(int a[], int n, int k){
	int d = 2;
	int i=0, j =i+d;
	while(j < n && a[j] < k){
		j = j + d;
		i = i + d;
	}
	if(j>=n){
		j = n;
	}
	while(a[i] < k){
		i++;
		if(i>j || i>n) return -1;
	}
	if(a[i] == k){
		return i;
	}else {
		return -1;
	}
}
int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	cout<<TimKiemBuocNhay(a, n, 9);
	return 0;
}
