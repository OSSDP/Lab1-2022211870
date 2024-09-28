#include<iostream>
#include<algorithm>
using namespace std;

int m, n;


void merge(int nums1[], int nums2[]) {
	int k = 0;
	for (int i = m;i < m + n;i++) {
		nums1[i] = nums2[k];
		++k;
	}
	sort(nums1,nums1+m+n);
}
void main() {
	cin >> m >> n;
	int nums1[200] = { 0 };
	int nums2[200] = { 0 };
	int i;
	for (i = 0;i < m;i++) {
		cin >> nums1[i];
	}
	for (i = 0;i < n;i++) {
		cin >> nums2[i];
	}
	merge(nums1, nums2);
	for (i = 0;i < m + n;i++) {
		cout << nums1[i] <<' ';
	}
}