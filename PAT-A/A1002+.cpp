/*
1002 A+B for Polynomials
*/
#include <iostream>
using namespace std;
int main(){
	float a[1001]={0};
	int i;
	for(i=0;i<2;i++){
		int k=0;
		cin >> k;
		int j=0;
		for(;j<k;j++){
			int e=0;
			float c=0;
			cin >> e >> c;
			a[e]+=c;
		}
	}
	int cnt=0;
	for(i=0;i<1001;i++){
		if(a[i]!=0){
			cnt++;
		}
	}
	cout << cnt;
	int flag=0;
	for(i=1000;i>0;i--){
		if(a[i]!=0&&flag<cnt){
			flag++;
			cout <<" "<< i << " "<< a[i];
		}
	}	
}
