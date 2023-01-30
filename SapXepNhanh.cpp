#include<iostream>
using namespace std;
void nhap_mang(int a[100], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuat_mang(int a[100], int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
void swap(int a[100], int x, int y){
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}
int partition(int a[100], int left, int right){
	int pivot = a[left];
	int count = 0;
	for(int i=left + 1; i<=right; i++){
		if(a[i]<=pivot)
			count++;
	}

	int pivotIndex = left + count;
	swap(a,left,pivotIndex);
	int i = left;
	int j = right;
	while(i < pivotIndex && j > pivotIndex){
		while(a[i] < pivot){
			i++;
		}
		while(a[j] > pivot){
			j--;
		}
		if(i < pivotIndex && j > pivotIndex){
			swap(a,i,j);
		}
	}
	return pivotIndex;
}
void QuickSort(int a[100], int left, int right){
	if(left >= right){
		return;
		
	}
	int pivot = partition(a, left, right);
		QuickSort(a, left, pivot-1);
		QuickSort(a, pivot+1, right);	
}
int main(){
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	QuickSort(a,0,n-1);
	xuat_mang(a,n);
	return 0;
}
