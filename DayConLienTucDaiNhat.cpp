#include<iostream>
using namespace std;
void nhap_mang(int a[100], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int SoSanh(int a, int b){
	if(a<=b) return 1;
	else return 0;
}
//void DayConLienTucKhongGiam(int a[100], int n){
//	int dem =0, max =0;
//	int i=0, BatDau = 0, KetThuc =0,nho=0,j=0;
//	while(n>0){
//		if(SoSanh(a[i], a[i+1])){
//			dem++;
//			j++;
//		}
//		if(dem!=0&&nho==0){
//			BatDau = i;
//			nho++;	
//		}
//		i++;
//		n--;
//	}
//	KetThuc =j-1;
//
//	if(dem>max){
//		max = dem;
//	}
//	cout<<"Day con lien tuc dai nhat tu vi tri "<<BatDau<<" den vi tri "<<KetThuc<<" = "<<max;
//}
void DayConLienTucKhongGiam(int a[100], int n){
	int BatDau = 0, len = 0,max_len=0, j=0;
	for(int i=0;i<n;i++){
		j = i;
		len=1;
		while(j < n && a[j] <= a[j+1]){
			len++;
			j++;
		}
		if(max_len < len){
			max_len = len;
			BatDau =i;
		}
		
	}
	
	cout<<"Day con lien tuc dai nhat tu vi tri "<<BatDau<<" = "<<max_len;
}
int main() {
	int a[100], n;
	cin>>n;
	nhap_mang(a,n);
	DayConLienTucKhongGiam(a,n);

	return 0;
}
