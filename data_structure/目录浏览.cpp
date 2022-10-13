//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stack>
//#include <stdio.h>
//#include<string>
//using namespace std;
//int main() {
//	stack<string>arr;
//	stack<string>op;
//	string tmp;
//	int c = 0;
//	arr.push("/"); arr.push("home");
//	arr.push("/"); arr.push("tom");
//	while(getline(cin,tmp)) {
//		if (tmp == "/") {
//			while (!arr.empty())arr.pop();
//		}
//		else if (tmp == "..") {
//			if (!arr.empty()) {
//				arr.pop(); arr.pop();
//			}
//		}
//		else if (tmp == "~")
//		{
//			while (!arr.empty())arr.pop();
//			arr.push("/"); arr.push("home");
//			arr.push("/"); arr.push("tom");
//		}
//		else if (tmp == ".") {
//			continue;
//		}
//		else {
//			arr.push("/");
//			arr.push(tmp);
//		}
//	}
//	string k;
//	arr.push("/");
//	while (!arr.empty()) {
//		op.push(arr.top());
//		arr.pop();
//	}
//	while (!op.empty())
//	{
//		cout << op.top();
//		op.pop();
//	}
//	return 0;
//}