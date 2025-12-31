//#include<iostream>
//using namespace std;
//int main() {
//	int n[10];
//	int count = 0;
//	for(int i=0;i<10;i++){
//		cin >> n[i];
//	}
//	for (int i = 0; i < 10; ++i) {
//		for(int j=9-count;j>i;j--){
//			if(n[i]==n[j]){
//				while (j <9)
//				{
//					n[j] = n[j + 1];
//					j++;
//				}
//				count++;
//				n[10 - count] = 0;
//			}
//		}
//	}
//	for(int i=0;i<10-count;i++){
//		cout << n[i] <<" ";
//	}
//	return 0;
//}