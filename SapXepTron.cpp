#include<iostream>
using namespace std;
void nhap_mang(int a[100], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuat_mang(int a[100], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void Merge(int a[100], int left, int middle, int right){
	int len_left = middle - left + 1;
	int len_right = right - middle;
	int a_left[len_left];
	int a_right[len_right];
	for(int i=0;i<len_left;i++){
		a_left[i] = a[left + i];
	} 
	for(int i=0;i<len_right;i++){
		a_right[i] = a[middle + 1 + i];
	}
	int i1=0, i2=0, k = left;
	while(i1 < len_left && i2 < len_right){
		if(a_left[i1] <= a_right[i2]){
			a[k] = a_left[i1];
			i1++;
		}else{
			a[k] = a_right[i2];
			i2++;
		}
		k++;
	}
	while(i1<len_left){
		a[k] = a_left[i1];
		i1++;
		k++;
	}
	while(i2<len_right){
		a[k] = a_right[i2];
		i2++;
		k++;
	}
}
void MergeSort(int a[100], int left, int right){
	if(left < right){
		int middle = (left + right)/2;
		MergeSort(a, left, middle);
		MergeSort(a, middle + 1, right);
		Merge(a, left, middle, right);
	}
}
int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	MergeSort(a,0,n-1);
	xuat_mang(a,n);
	return 0;
}
