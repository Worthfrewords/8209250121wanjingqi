//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int indexOf(const char s1[], const char s2[])
//{
//    int l1 = strlen(s1);
//    int l2 = strlen(s2);
//    if (l1 > l2) return -1;
//    for (int i = 0; i <= l2 - l1; i++) 
//    {
//        int match = 1;
//        for (int j = 0; j < l1; j++)
//        {
//            if (s2[i + j] != s1[j])
//            {
//                match = 0;
//                break;
//            }
//        }
//        if (match) return i;
//    }
//    return -1;
//}
//
//int main()
//{
//    char a[100], b[100];
//    int num;
//    cout << "Enter the first string: " << endl;
//    cin >> a;
//    cout << "Enter the second string: " << endl;
//    cin >> b;
//    num = indexOf(a, b);
//    if (num == -1)
//        cout << "S1 is not a substring of S2" << endl;
//    else
//        cout << "S1 is a substring of S2! index is: " << num << endl;
//
//    return 0;
//}