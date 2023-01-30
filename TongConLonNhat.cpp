#include<iostream>
using namespace std;
//c1
//void TongConLonNhat(int a[9],int n){
//	int tong = 0;
//	int max =a[0];
//	int left =0, right =0;
//	for(int i=0;i<n-1;i++){
//		tong = a[i];
//		for(int j=i+1;j<n;j++){
//			tong = tong + a[j];	
//				if(max<tong){
//					max = tong;	
//					left = i;
//					right =j;
//				}
//			
//			
//		}
//		
//	}
//	cout<<"left = "<<left<<endl;
//	cout<<"right = "<<right<<endl;
//	cout<<"max = "<<max;
//
//}
//c2
struct KetQua {
	int tong;
	int bat_dau;
	int ket_thuc;
};
int TinhTong(int a[9], int bat_dau, int ket_thuc){
	int tong = 0;
	for(int i=bat_dau;i<=ket_thuc;i++){
		tong+=a[i];
	}return tong;
}
KetQua TongConLonNhat(int a[9], int n){
	KetQua kq;
	kq.tong = 0;
	kq.bat_dau = 0;
	kq.ket_thuc = 0;
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum = TinhTong(a,i,j);
			if(sum>kq.tong){
				kq.tong = sum;
				kq.bat_dau = i;
				kq.ket_thuc = j;
			}
		}
	}return kq;
}
int main() {
	int a[9] = {2,-3,-5,2,3,4,-1,0};
	KetQua kq = TongConLonNhat(a,8);
	cout<<"\nVi tri bat dau = "<<kq.bat_dau<<endl;
	cout<<"\nVi tri ket thuc = "<<kq.ket_thuc<<endl;
	cout<<"\nTong = "<<kq.tong<<endl;
	return 0;
}
