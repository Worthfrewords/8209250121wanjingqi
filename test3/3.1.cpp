//#include<iostream>
//using namespace std;
//int sum1(int a, int b) {
//	int c = 0;
//	for (int i = 1; i < b || i < a; i++) {
//		if (b % i == 0 && a % i == 0) {
//			c = i;
//		}
//	}
//	if (c == 0) {
//		return 1;
//	}
//	else {
//		return c;
//	}
//}
//int sum2(int a,int b) {
//		return (a*b)/sum1(a,b);
//	}
//int main() {
//	int a, b;
//	cout<<"请输入两个正整数"<< endl;
//	cin >> a >> b;
//	cout <<"最大公约数是" << sum1(a, b) <<"最小公倍数是" <<sum2(a,b)<< endl;
//}