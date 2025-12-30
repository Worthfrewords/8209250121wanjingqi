//#include<iostream>
//using namespace std;
//int parseHex(const char*const hexString) {
//	int len = strlen(hexString) - 1;
//	int num = 0;
//	int sum = 0;
//	for (int i = 0; i <=len;i++)
//	{
//		char ch = hexString[i];
//		if (ch >= '0' && ch <= '9') {
//			num = ch - '0';
//		}
//		else if (ch >= 'A' && ch <= 'F') {
//			num = ch - 'A' + 10;
//		}
//		else if (ch >= 'a' && ch <= 'f') {
//			num = ch - 'a' + 10;
//		}
//		sum = sum * 16 + num;
//		num = 0;
//	}
//	return sum;
//}
//int main() {
//	char hexString[1000];
//	cin >> hexString;
//	int a;
//	a= parseHex(hexString);
//	cout << a << endl;
//	return 0;
//}