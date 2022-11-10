//#include<iostream>
//using namespace std;
//int arr[100000];
//void dfs(string s, int i) {
//	if (arr[i * 2] == 0 && arr[i * 2 + 1] == 0) {
//		cout << s << endl;
//	}
//	else {
//		if (arr[i * 2])dfs(s + "0", i * 2);
//		if (arr[i * 2 + 1])dfs(s + "1", i * 2 + 1);
//	}
//}
//int main() {
//	int value, i = 1;
//	string s = "";
//	while (cin >> value) {
//		if (value == 1)arr[i] = 1;
//		i++;
//	}
//	dfs(s, 1);
//	return 0;
//}