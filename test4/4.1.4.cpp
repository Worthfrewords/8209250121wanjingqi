//#include<iostream>
//using namespace std;
//const int allnum = 80;
//void bubble_sort(double arr[], int n)
//{
//	int i, j;
//	double temp;
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void merge(double list1[], int size1, double list2[], int size2) {
//	int sumsize = size1 + size2;
//	double list[allnum] = { 0 };
//	for (int i = 0; i < size1; i++) {
//		list[i] = list1[i];
//	}
//	for (int i = 0; i < size2; i++) {
//		list[i+size1] = list2[i];
//	}
//	bubble_sort(list, sumsize);
//	for (int i = 0; i < size1 + size2; i++)
//		cout << list[i] << " ";
//}
//int main() {
//	int size1, size2;
//	double list1[allnum], list2[allnum];
//	cout << "输入第一个数组的长度：" << endl;
//	cin >> size1;
//	cout << "输入第一个数组中的数据：" << endl;
//	for (int i = 0; i < size1; i++)
//	{
//		cin >> list1[i];
//	}
//	cout << "输入第二个数组的长度：" << endl;
//	cin >> size2;
//	cout << "输入第二个数组中的数据：" << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cin >> list2[i];
//	}
//	merge(list1, size1, list2, size2);
//}