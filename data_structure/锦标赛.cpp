//#include <iostream>
//#include <stack>
//#include <vector>
//#include <queue>
//using namespace std;
//struct btreenode {
//	int value;
//	int country = 0;
//	btreenode* left_child;
//	btreenode* right_child;
//	btreenode(int value, int coun, btreenode* left, btreenode* right) {
//		this->country = coun;
//		this->left_child = left;
//		this->right_child = right;
//		this->value = value;
//	}
//	btreenode(int value, int coun) {
//		this->country = coun;
//		this->left_child = NULL;
//		this->right_child = NULL;
//		this->value = value;
//	}
//	btreenode() {
//		this->value = 0;
//		this->left_child = NULL;
//		this->right_child = NULL;
//	}
//};
//struct node {
//	int country1;
//	int country2;
//	int cv1;
//	int cv2;
//	int win;
//	node(int c1, int c2, int cv1, int cv2, int w) {
//		this->country1 = c1;
//		this->country2 = c2;
//		this->cv1 = cv1;
//		this->cv2 = cv2;
//		this->win = w;
//	}
//};
//int main()
//{
//	int n = 0, all = 1, a = 0;
//	queue<btreenode>arr;
//	queue<btreenode>tmp;
//	vector<vector<node>>v(n);
//	vector<int>oo;
//	int y = 0;
//	while (cin >> y) {
//		oo.push_back(y);
//	}
//	n = oo.size();
//	for (int i = 0; i <= n; i++) {
//		v.resize(n);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		btreenode* newnode = new btreenode(oo[i], i + 1);
//		arr.push(*newnode);
//	}
//	if (arr.size() == 1) {
//		cout << arr.front().country;
//		return 0;
//	}
//	while (1)
//	{
//		while (!arr.empty())
//		{
//			btreenode k;
//			btreenode *father = NULL;
//			if (arr.size() >= 2) {
//				btreenode tmp1 = arr.front(); arr.pop();
//				btreenode tmp2 = arr.front(); arr.pop();
//				if (tmp1.value > tmp2.value) {
//					v[all].push_back(node(tmp1.country, tmp2.country, tmp1.value, tmp2.value, tmp1.country));
//					k = tmp1;
//				}
//				else {
//					v[all].push_back(node(tmp1.country, tmp2.country, tmp1.value, tmp2.value, tmp2.country));
//					k = tmp2;
//				}
//				father = new btreenode(k.value, k.country, &tmp1, &tmp2);
//				tmp.push(*father);
//			}
//			else if (arr.size() == 1) {
//				k = arr.front();
//				arr.pop();
//				father = new btreenode(k.value, k.country, NULL, &k);
//				tmp.push(*father);
//			}
//		}
//		all++;
//		if (tmp.size() == 1)break;
//		while (!tmp.empty()) {
//			btreenode k;
//			btreenode* father;
//			if (tmp.size() >= 2) {
//				btreenode tmp1 = tmp.front(); tmp.pop();
//				btreenode tmp2 = tmp.front(); tmp.pop();
//				if (tmp1.value > tmp2.value) {
//					v[all].push_back(node(tmp1.country, tmp2.country, tmp1.value, tmp2.value, tmp1.country));
//					k = tmp1;
//				}
//				else {
//					v[all].push_back(node(tmp1.country, tmp2.country, tmp1.value, tmp2.value, tmp2.country));
//					k = tmp2;
//				}
//				father = new btreenode(k.value, k.country, &tmp1, &tmp2);
//				arr.push(*father);
//			}
//			else if (tmp.size() == 1) {
//				k = tmp.front();
//				tmp.pop();
//				father = new btreenode(k.value, k.country, NULL, &k);
//				arr.push(*father);
//			}
//		}
//		all++;
//		if (arr.size() == 1)break;
//	}
//	for (int i = v.size() - 1; i >= 1; i--) {
//		if (v[i].size() != 0) {
//			for (int j = 0; j < v[i].size(); j++) {
//				if (v[i][j].win == v[i][j].country1) {
//					cout << v[i][j].country1 << "*(" << v[i][j].cv1 << "-" << v[i][j].cv2 << ")" << v[i][j].country2<< " ";
//				}
//				else {
//					cout << v[i][j].country1 << "(" << v[i][j].cv1 << "-" << v[i][j].cv2 << ")" << v[i][j].country2 << "* ";
//				}
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}