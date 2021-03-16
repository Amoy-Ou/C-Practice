#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int add(int &a,int &b);
int main() {
	
	int i=0,j=0;
	cin >> i >> j;
	cout << i <<endl;
	cout << j <<endl;
	cout << "i+j:" << add(i,j) <<endl;
	cout << "i+j:" << add(i,j) <<endl;
}

int add(int &a,int &b){
	a++;
	b++;
	return a+b;
}
