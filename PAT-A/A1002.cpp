/*
1002 A+B for Polynomials
*/
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
	vector<int> an,bn;//存指数
	vector<float> ak,bk,out;//存系数
	int na,nb;

	cin >> na;
	for(int i=1; i<=na; i++) {
		int ntemp;
		float ktemp;
		cin >>ntemp >> ktemp;
		ak.push_back(ktemp);
		an.push_back(ntemp);
	}
	cin >> nb;
	for(int i=1; i<=nb; i++) {
		int ntemp;
		float ktemp;
		cin >> ntemp >> ktemp;
		bk.push_back(ktemp);
		bn.push_back(ntemp);
	}
	int num=0;
	int exp=-1;
	while(an.size()>0||bn.size()>0) {
		if(an.size()>0&&bn.size()>0) {
			if(an[0]>bn[0]) {
				out.push_back(an[0]);
				out.push_back(ak[0]);
				an.erase(an.begin());
				ak.erase(ak.begin());
			} else if(an[0]==bn[0]) {
				if(ak[0]+bk[0]!=0) {
					out.push_back(an[0]);
					out.push_back(ak[0]+bk[0]);
				} else {
					num--;//多算了
				}
				//out.push_back(ak[0]+bk[0]); 这里为零不能输出
				an.erase(an.begin());
				bn.erase(bn.begin());
				ak.erase(ak.begin());
				bk.erase(bk.begin());
			} else {
				out.push_back(bn[0]);
				out.push_back(bk[0]);
				bn.erase(bn.begin());
				bk.erase(bk.begin());
			}
		} else if(an.size()>0) {
			out.push_back(an[0]);
			out.push_back(ak[0]);
			an.erase(an.begin());
			ak.erase(ak.begin());
		} else {
			out.push_back(bn[0]);
			out.push_back(bk[0]);
			bn.erase(bn.begin());
			bk.erase(bk.begin());
		}
		num++;
	}
	cout << num;
	cout.unsetf(ios::fixed);
	for(vector<float>::size_type i=0; i<out.size(); i++) {
		cout << ' '<<setprecision(2)<<out[i];
	}
}

