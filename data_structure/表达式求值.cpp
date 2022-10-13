//#include<iostream>
//#include <stack>
//#include <cstring>
//#include <string>
//using namespace std;
//int main()
//{
//	int A = 0;
//	string s;
//	char s1[100] = { '\0' };
//	getline(cin, s);
//	stack<char>k;
//	int j = 0;
//	if (s.size() == 1)
//	{
//		cout << s << endl;
//		return 0;
//	}
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			s1[j++] = s[i];
//		}
//		else
//		{
//			if (k.empty() == 0)
//			{
//				if (s[i] == '+' || s[i] == '-')
//				{
//					while (!k.empty())
//					{
//						if (k.empty() == 1)
//						{
//							break;
//						}
//						s1[j++] = k.top();
//						k.pop();
//					}
//					k.push(s[i]);
//				}
//				else if (s[i] == '*' || s[i] == '/')
//				{
//					if (k.top() == '^' || k.top() == '*' || k.top() == '/')
//					{
//						while (!k.empty())
//						{
//							if (k.top() == '+' || k.top() == '-' || k.empty() == 1)
//							{
//								break;
//							}
//							s1[j++] = k.top();
//							k.pop();
//						}
//						k.push(s[i]);
//					}
//					else if (k.top() == '+' || k.top() == '-')
//					{
//						k.push(s[i]);
//					}
//				}
//				else
//				{
//					if (k.top() == '^')
//					{
//						while (!k.empty())
//						{
//							if (k.top() != '^' || k.empty() == 1)
//							{
//								break;
//							}
//							s1[j++] = k.top();
//							k.pop();
//						}
//						k.push(s[i]);
//					}
//					else
//					{
//						k.push(s[i]);
//					}
//				}
//			}
//			else {
//				k.push(s[i]);
//			}
//		}
//	}
//	while (!k.empty())
//	{
//		s1[j++] = k.top();
//		k.pop();
//	}
//	stack<int>w;
//	for (int i = 0; i < j; i++)
//	{
//		if (s1[i] >= '0' && s1[i] <= '9')
//		{
//			w.push(s1[i] - '0');
//		}
//		else
//		{
//			int x = 0, y = 0, all = 0;;
//			y = w.top();
//			w.pop();
//			x = w.top();
//			w.pop();
//			switch (s1[i])
//			{
//			case '+':
//				all += x + y;
//				break;
//			case'-':
//				all += x - y;
//				break;
//			case '*':
//				all += x * y;
//				break;
//			case'/':
//				all += x / y;
//				break;
//			case'^':
//				if (y <= 0) {
//					x = 1;
//					all += x;
//				}
//				else
//				{
//					int m = x;
//					while (y != 1)
//					{
//						m = m * x;
//						y--;
//					}
//					all += m;
//					break;
//				}
//			}
//			w.push(all);
//			A = all;
//		}
//	}
//	cout << A;
//	return 0;
//}