/*#include<iostream>
using namespace std;
int main()
{
	int r, h;
	const double pi = 3.14;
	cout << "请依次输入圆锥体的底面半径和高" << endl;
	cin >> r >> h;
	double v = pi * r * r * h / 3;
	cout << "该圆锥体的体积是：" << v << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{   
    double C, F;
	cout << "请输入华氏温度值：" << endl;
	cin >> F;
	double C = (F - 32) * 5 / 9;
	cout << "对应的摄氏温度值是：" << C << endl;
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a <= 90) cout << a + 0 << endl;
	else cout << a - 32 << endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	double p = 0.8, sum = 2, n=2, d=1,x;
	while (1)
	{
		d++;
	    n=n*2;
		sum = sum + n;
		if(sum>100) break;
		x = sum * p / d;
		}
	cout << "每天平均花" << x<< "元" << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	double a, a_new;
	cout << "请输入数值" << endl;
	cin >> a;
	double b = a;
	while (1)
	{
		if (a < 0)
		{
			cout << "输入错误，请重新输入" << endl;
			continue;
		}
		a_new = 0.5 * a + 0.5 * b / a;
		if (abs(a_new - a) < 1e-5) break;
		else a = a_new;
	}
	cout << "它的平方根为" << a_new << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	Int i = k + 1;
	cout << i++ << endl;
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	cout << "char length：" << sizeof(char) << endl;
	cout << "int length：" << sizeof(int) << endl;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;//转换为int类型
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
	system("pause");
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (0 < x&&x< 1) y = 3 - 2*x;
	else if (1 <= x&&x < 5) y = 0.5 / x + 1;
	else if (5 <= x&&x < 10) y = x * x;
	cout << y << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	double a, b, c;//三角形三边长
	cout << "请输入三角形三边长:\t";
	cin >> a >> b >> c;
	if (a >= b + c)
	{
		cout << "不能组成三角形\t";
	}
	else if(b>=a+c)
	{
		cout << "不能组成三角形\t";
	}
	else if(c>=a+b)
	{
		cout << "不能组成三角形\t";
	}
	else
	{
		cout << "周长为:" << a + b + c << endl;
		if (a = b)
		{
			cout << "为等腰三角形\t";
		}
		else if(a=c)
		{
			cout << "为等腰三角形\t";
		}
		else if (b=c)
		{
			cout << "为等腰三角形\t";
		}
	}
}*/
/*#include<iostream>
using namespace std;
int main()
{
	double a;
	double b;
	char c;
	cout << "请输入数字\t";
	cin >> a;
	cout<< "请输入运算符号\t";
	cin >> c;
	cout<< "请输入数字\t";
	cin >> b;
	if (c == 43)
	{
		cout << a + b;
	}
	if (c == 45)
	{
		cout << a - b;
	}
	if (c == 42)
	{
		cout << a * b;
	}
	if (c == 47)
	{
		cout << a / b;
	}
}*/
/*#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "请输入一行字符：" << endl;
	// 使用cin.get()读取字符，直到遇到换行符
	while (cin.get(c) && c != '\n')
	{
		if (isalpha(c)) {        // 判断是否为英文字母
			letters++;
		}
		else if (isdigit(c)) { // 判断是否为数字
			digits++;
		}
		else if (isspace(c)) { // 判断是否为空格
			spaces++;
		}
		else {                 // 其他字符
			others++;
		}
	}
	cout << "统计结果：" << endl;
	cout << "英文字母个数: " << letters << endl;
	cout << "空格个数: " << spaces << endl;
	cout << "数字字符个数: " << digits << endl;
	cout << "其他字符个数: " << others << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	int d = a, e = b;
	if (a >= b)
	{
		c = a % b;
		for (; c != 0;)
		{
			a = b;
			b = c;
			c = a % b;
		}
		cout << "最大公约数为 " << b << endl;
		cout << "最小公倍数为" << d * e / b;
	}
	else
	{
		c = b%a;
		for (; c != 0;)
		{
			b = a;
			a = c;
			c = b % a;
		}
		cout << "最大公约数为 " << a << endl;
		cout << "最小公倍数为" << d * e / a;
	}
}*/
/*#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int n = i; n > 0; n--)
			cout << "*";
		cout << endl;
	}
}*/