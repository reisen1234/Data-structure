//#include <iostream>
//using namespace std;
//class STACK
//{
//	int top;
//	char* base;
//	int all;
//public:
//	STACK(int size);
//	~STACK();
//	void pop(char value);
//	char push();
//};
//STACK::STACK(int size)
//{
//	top = 0;
//	base = new char[size] {0};
//	all = size;
//}
//STACK::~STACK()
//{
//	delete[]base;
//	base = NULL;
//}
//void STACK::pop(char value)
//{
//	base[top] = value;
//	++top;
//}
//char STACK::push()
//{
//	if (top == 0)
//	{
//		return '0';
//	}
//	char a = base[--top];
//	return a;
//}
//int main()
//{
//	string s1;
//	cin >> s1;
//	int n = s1.size();
//	STACK s = STACK(n);
//	for (int i = 0; i < n; i++)
//	{
//		if (s1[i] == '[' || s1[i] == '{' || s1[i] == '(')
//		{
//			s.pop(s1[i]);
//		}
//		else
//		{
//			char c = s.push();
//			if (c == '0')
//			{
//				cout << "no" << endl;
//				return 0;
//			}
//			else if (s1[i] != ']')
//			{
//				if (c == '[')
//				{
//					cout << "no" << endl;
//					return 0;
//				}
//			}
//			else if (s1[i] != '}')
//			{
//				if (c == '{')
//				{
//					cout << "no" << endl;
//					return 0;
//				}
//			}
//			else if (s1[i] != ')')
//			{
//				if (c == '(')
//				{
//					cout << "no" << endl;
//					return 0;
//				}
//			}
//		}
//	}
//	if (s.push() != '0')
//	{
//		cout << "no" << endl;
//	}
//	else
//		cout << "yes" << endl;
//	return 0;
//}
