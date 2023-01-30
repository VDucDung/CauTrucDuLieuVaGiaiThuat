#include<iostream>
using namespace std;
char a[3] = {'A', 'B', 'C'};
void ThapHaNoi(int n, int i, int j, int k){
	if(n == 1){
		cout<<"Chuyen dia "<<n<<" tu cot "<<a[i]<<" sang cot "<<a[j]<<endl;
	}else{
		ThapHaNoi(n-1,i,k,j);
		cout<<"Chuyen dia "<<n<<" tu cot "<<a[i]<<" sang cot "<<a[j]<<endl;
		ThapHaNoi(n-1,k,j,i);
		
	}
}
int main() {
	int n;
	cin>>n;
	ThapHaNoi(n,0,2,1);
	return 0;
}
