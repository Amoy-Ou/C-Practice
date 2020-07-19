/*
Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).
*/

#include <iostream>
#include <stack>
using namespace std;
int main() {
	int a, b;
	stack<int> st;
	cin >> a >> b;
	int sum = a + b;

	if(sum == 0) {
		cout << sum;
		return 0;
	}

	if(sum < 0) {
		cout << '-';
		sum = -sum;
	}

	while(sum != 0) {
		st.push(sum % 10);
		sum = sum / 10;
	}

	int len = st.size();

	for(int i = 1; i <= len; i++) {
		cout << st.top();
		st.pop();
		if((len - i) % 3 == 0 && len > i) {
			cout << ',';
		}
	}
}
