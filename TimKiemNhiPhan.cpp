#include<iostream>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int TimKiemNhiPhan(int a[], int n, int k){
	int left =0, right =n-1;
	int mid =0;
	while(left<=right){
		mid = (int)(left + right) / 2;
		if(a[mid]==k){
			return mid;
		}else if(a[mid] < k){
			left = mid + 1;
		}else {
			right = mid - 1;
		}
	}return -1;
}
int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	cout<<TimKiemNhiPhan(a, n, 38);
	return 0;
}
