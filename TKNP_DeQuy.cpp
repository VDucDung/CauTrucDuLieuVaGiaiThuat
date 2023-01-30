#include<iostream>
using namespace std;
void nhap_mang(int a[100], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int TKNP_DeQuy(int a[100], int n, int k, int left, int right){
	if(left==right){
		if(a[left] == k){
			return left;
		}return -1;
	}else{
		int mid = (left + right)/2;
		if(a[mid] == k){
			return mid;
		}else{
			if(a[mid] < k){
				TKNP_DeQuy(a,n,k,mid+1,right);
			}else{
				TKNP_DeQuy(a,n,k,left,mid-1);
			}
		}
	}
}
int main() {
	int a[100], n, k, left, right;
	cin>>n;
	nhap_mang(a,n);
	k = 9;
	left = 0;
	right= n-1;
	cout<<"Vi tri can tim = "<<TKNP_DeQuy(a,n,k,left,right);
	return 0;
}
