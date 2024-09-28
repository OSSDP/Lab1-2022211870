#include<iostream>
using namespace std;

int main() {
	int num[100000];
	char ch;
	int i = 0;
	cin >> num[i];
	i++;
	while ((ch = getchar()) != '\n') {
		cin >> num[i];
		i++;
	}
	int target;
	cin >> target;
	int hnum[100000] = {-100};
	for (int j = 0;j < i;j++) {

		hnum[target - num[j] + 100] = num[j];
	}
	for (int k = 0;k < i;k++) {
		if (hnum[num[k]+100] != 0) {
			cout << k << ' ';
		}
	}

}