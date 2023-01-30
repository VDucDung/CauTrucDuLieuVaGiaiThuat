#include<iostream>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuat_mang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
//c1
//void SapXepChen(int a[], int n){
//	for(int i=1;i<=n-1;i++){
//		int j = i;
//		while(j>0 && a[j]<=a[j-1]){
//			int doi = a[j];
//			a[j] = a[j-1];
//			a[j-1]=doi;
//			j--;
//		}
//	}
//}
//c2
void SapXepChen(int a[], int n){
	for(int i=1;i<=n-1;i++){
		int key = a[i];
		int j =i-1;
		while(j>=0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}

}
int main(){
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	SapXepChen(a,n);
	xuat_mang(a,n);
	return 0;
}
