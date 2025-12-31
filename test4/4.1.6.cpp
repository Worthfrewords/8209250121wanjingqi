//#include<iostream>
//#include<cstdio>
//using namespace std;
//void count(const char s[])
//{
//	int counts1[26] = { 0 };
//	for (int i = 0; i < strlen(s); i++)
//	{
//		for(int j=0;j<26;j++)
//		{
//			if (s[i] == 'a' + j || s[i] == 'A' + j)
//			{
//				counts1[j]++;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (counts1[i] > 0) printf("%c:%d times\n", 'a' + i, counts1[i]);
//	}
//}
//int main()
//{
//	char s[100];
//	int counts[26] = { 0 };
//	cout << "Enter a string: " << endl;
//	cin.getline(s, 100);
//	count(s);
//	return 0;
//}