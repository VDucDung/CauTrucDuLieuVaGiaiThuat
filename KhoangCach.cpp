#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

float khoangCach(float x1, float y1, float x2, float y2){
	return sqrt(pow(fabs(x2-x1), 2) + pow(fabs(y2-y1), 2));;
}
void KhoangCachNhoNhat(float x[100], float y[100], int n){
	float min = 99999;
	float d=0;
	int i_min=0,j_min=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				d=khoangCach(x[i], y[i], x[j], y[j]);
				if(min>d){
					min = d;
					i_min = i+1;
					j_min = j+1;
				}
			}
			
		}
	}cout<<"\nd("<<i_min<<", "<<j_min<<")= "<<fixed<<setprecision(1)<<min;
}
int main() {
	int n;
	float x[100],y[100];
	cout<<"Nhap so toa do: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap toa do diem x"<<i+1<<": ";cin>>x[i];
		cout<<"Nhap toa do diem y"<<i+1<<": ";cin>>y[i];
	}
	KhoangCachNhoNhat(x,y,n);
	


	return 0;
}
