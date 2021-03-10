#include <iostream>
using namespace std;
/**
 * 逆置数组
 */
void reverse(int *a, int h, int e) {
	int temp;
	int r=e-1;
	while (h < r) {
		temp = a[h];
		a[h] = a[r];
		a[r] = temp;
		h++;
		r--;
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	m=m%n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	reverse(a, 0, n-m);
	reverse(a, n-m, n);
	reverse(a, 0, n);
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (flag == 0) {
			cout << a[i];
			flag++;
		} else
			cout << " " << a[i];
	}
}
