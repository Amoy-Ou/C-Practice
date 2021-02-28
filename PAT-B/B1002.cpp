/*
1002 д������� (20 ��)
����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10
?100
?? ��

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/
#include <iostream>
using namespace std;
#include <stack>
#include <string>
void showNum(int n) {
	switch(n) {
		case 1:
			cout << "yi";
			break;
		case 2:
			cout <<"er";
			break;
		case 3:
			cout <<"san";
			break;
		case 4:
			cout <<"si";
			break;
		case 5:
			cout <<"wu";
			break;
		case 6:
			cout <<"liu";
			break;
		case 7:
			cout <<"qi";
			break;
		case 8:
			cout <<"ba";
			break;
		case 9:
			cout <<"jiu";
			break;
		case 0:
			cout <<"ling";
	}
}

int main() {
	string n;
	int temp;
	int sum=0;
	stack<int> s;
	cin >> n;
	for(int i=0;i<n.length();i++){
		sum+=n[i]-'0';
	}
	while(sum>0) {
		s.push(sum%10);
		sum/=10;
	}
	while( !s.empty() ) {
		showNum(s.top());
		s.pop();
		if(!s.empty())
			cout << " ";
	}

}
