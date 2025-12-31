//#include<iostream>
//using namespace std;
//void change(bool state[], int n) {
//	int count = 0;
//	for (int i = n; i <= 100; i++) {
//		if (count == n) {
//			state[i - 1] = !state[i - 1];
//			count = 0;
//		}
//		count++;
//	}
//}
//int main() {
//	bool state[100] = { 0 };
//	for(int i=0; i < 100; i++) {
//		state[i] = true;
//	}
//	for (int i = 2; i <= 100; i++) {
//		change(state, i);
//	}
//	for(int i=0;i<100;i++){
//		cout << state[i]<< " ";
//	}
//}