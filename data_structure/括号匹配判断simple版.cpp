//#include<iostream>
//#include<stack>
//using namespace std;
//int main() {
//	string s;
//	cin >> s;
//	stack<char>arr;
//	int flag = 0;
//	for (auto i = s.begin(); i != s.end(); i++) {
//		if (*i == '(') {
//			arr.push('(');
//			flag = 1;
//		}
//		else if (*i == ')') {
//			if (arr.empty()) {
//				cout << "no";
//				return 0;
//			}
//			else {
//				if (arr.top() == '(')arr.pop();
//			}
//		}
//		else continue;
//	}
//	if (!arr.empty() || flag == 0)cout << "no";
//	else cout << "yes";
//	return 0;
//}