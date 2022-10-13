//#include<iostream>
//#include <stack>
//#include <cstring>
//#include <string>
//using namespace std;
//int main()
//{
//	stack<char>q;
//	string s;
//	getline(cin, s);
//	stack<char>k;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '<')
//		{
//			char o = q.top();
//			k.push(o);
//			q.pop();
//		}
//		else if (s[i] == '>')
//		{
//			if (k.empty() == 0)
//			{
//				char o = k.top();
//				k.pop();
//				q.push(o);
//			}
//		}
//		else
//		{
//			q.push(s[i]);
//			while (!k.empty())
//			{
//				k.pop();
//			}
//		}
//	}
//	char s1[100] = { '\0' };
//	int i = 0;
//	while (!q.empty())
//	{
//		s1[i++] = q.top();
//		q.pop();
//	}
//	for (int i = strlen(s1) - 1; i >= 0; i--)
//	{
//		cout << s1[i];
//	}
//	return 0;
//}