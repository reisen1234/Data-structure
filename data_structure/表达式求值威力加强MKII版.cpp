//#include <cmath>
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//int campare(int a, int b)
//{
//	a = abs(a);//栈顶
//	b = abs(b);//带入符号
//	if (a - b == 1 || a - b == -1)
//	{	//同等级
//		return 1;
//	}
//	else if (a > b)
//	{	//栈顶比符号等级高
//		return 2;
//	}
//	else if (a < b)
//	{	//栈顶比符号等级小
//		return 0;
//	}
//}
//char outputchar(int num)
//{
//	switch (num)
//	{
//	case -1:
//		return ')';
//		break;
//	case -3:
//		return '-';
//		break;
//	case -4:
//		return '+';
//		break;
//	case -6:
//		return '*';
//		break;
//	case -7:
//		return '/';
//		break;
//	case -9:
//		return '^';
//		break;
//	case -11:
//		return '(';
//		break;
//	}
//}
//int outputnum(char c)
//{
//	switch (c)
//	{
//	case ')':
//		return -1;
//		break;
//	case '-':
//		return -3;
//		break;
//	case '+':
//		return -4;
//		break;
//	case '*':
//		return -6;
//		break;
//	case '/':
//		return -7;
//		break;
//	case '^':
//		return -9;
//		break;
//	case '(':
//		return -11;
//		break;
//	}
//}
//int compute(int n1/*前*/, int n2/*后*/, char c)
//{
//	switch (c)
//	{
//	case '+':
//		return n2 + n1;
//		break;
//	case '-':
//		return n2 - n1;
//		break;
//	case '*':
//		return n2 * n1;
//		break;
//	case '/':
//		return n2 / n1;
//		break;
//	case '^':
//		if (n1 == 0)return 1;
//		n1 -= 1;
//		while (n1--)
//		{
//			n2 *= n2;
//		}
//		return n2;
//		break;
//	}
//}
//int main()
//{
//	string s1;
//	cin >> s1;
//	stack<char>opera;
//	vector<int>num;
//	for (auto i = s1.begin(); i != s1.end();)
//	{
//		if (*i >= '0' && *i <= '9')
//		{
//			vector<char>s2;
//			int k = 1, s = 0;
//			while (i != s1.end() && *i >= '0' && *i <= '9')
//			{
//				s2.push_back(*i);
//				if (i != s1.end())
//				{
//					i++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			k = s2.size();
//			k = pow(10, k - 1);
//			for (auto j = s2.begin(); j != s2.end(); j++)
//			{
//				s += ((*j) - '0') * k;
//				k /= 10;
//			}
//			num.push_back(s);
//		}
//		else
//		{
//			//<'+' = -1> <'-' = -2> <'*' = -4> <'/' = -5> <'^' = -7><'(' = -9> <')' = -10>
//			if (*i == '(')
//			{
//				opera.push(*i);
//				if (i != s1.end())
//				{
//					i++;
//				}
//			}
//			else if (*i == ')')
//			{
//				if (i != s1.end())
//				{
//					i++;
//				}
//				while (1)
//				{
//					num.push_back(outputnum(opera.top()));
//					opera.pop();
//					if (opera.top() == '(')
//					{
//						opera.pop();
//						break;
//					}
//				}
//			}
//			else if (*i == '+' || *i == '-' || *i == '*' || *i == '/' || *i == '^')
//			{
//				if (opera.size() == 0)
//				{
//					opera.push(*i);
//					if (i != s1.end())
//					{
//						i++;
//					}
//				}
//				else
//				{
//					if (campare(outputnum(opera.top()), outputnum(*i)) == 0)//cam：1代表同等级   2：栈顶比符号等级高0：符号比栈顶高
//					{
//						opera.push(*i);
//						if (i != s1.end())
//						{
//							i++;
//						}
//					}
//					else//返回1或者2
//					{
//						while (1)
//						{
//							if (opera.top() != '(')
//							{
//								num.push_back(outputnum(opera.top()));
//								opera.pop();
//							}
//							else
//							{
//								opera.push(*i);
//								i++;
//								break;
//							}
//							if (opera.size() == 0 || campare(outputnum(opera.top()), outputnum(*i)) == 0)
//							{
//								opera.push(*i);
//								i++;
//								break;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	while (opera.size() != 0)
//	{
//		num.push_back(outputnum(opera.top()));
//		opera.pop();
//	}
//	int s = 0;
//	stack<int>nums;
//	for (auto i = num.begin(); i != num.end(); i++)
//	{
//		if (*i >= 0)
//		{
//			nums.push(*i);
//		}
//		else
//		{
//			int num1 = nums.top();
//			nums.pop();
//			int num2 = nums.top();
//			nums.pop();
//			s = compute(num1, num2, outputchar(*i));
//			nums.push(s);
//		}
//	}
//	cout << nums.top();
//	return 0;
//}