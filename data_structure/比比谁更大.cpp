//#include <iostream>
//#include <map>
//#include <queue>
//using namespace std;
//struct node {
//	int x, y;
//	node(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//};
//int dp[5001];
//int l, w;
//void cc(int *vis[]) {
//	for (int i = 0; i < l; i++) {
//		for (int j = 0; j < w; j++) {
//			cout << vis[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//int main() {
//	cin >> w >> l;
//	int** arr = new int* [l];
//	int** vis = new int* [l];
//	for (int i = 0; i < l; i++) {
//		arr[i] = new int[w] {0};
//		vis[i] = new int[w] {0};
//	}
//	for (int i = 0; i < l; i++) {
//		for (int j = 0; j < w; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	memset(dp, 0, sizeof(dp));
//	for (int i = 0; i < l; i++) {
//		for (int j = 0; j < w; j++) {
//			if (arr[i][j] == 0 || vis[i][j] == 1)continue;
//			else {
//				int value = arr[i][j];
//				int max = 0;
//				queue<node>map;
//					map.push(node(j, i));
//					while (!map.empty()) {
//						int x = map.front().x, y = map.front().y;
//						if (x >= 0 && x < w && y >= 0 && y < l) {
//							if (arr[y][x] != value || vis[y][x] == 1)map.pop();
//							else if(arr[y][x] == value && vis[y][x] == 0) {
//								vis[y][x] = 1;
//								max++;
//								map.push(node(x, y + 1));
//								map.push(node(x, y - 1));
//								map.push(node(x + 1, y));
//								map.push(node(x - 1, y));
//							}
//						}
//						else map.pop();
//					}
//					if (dp[value] < max)dp[value] = max;
//			}
//		}
//	}
//	int max_i = dp[0], max_j = 0;
//	for (int i = 1; i <= 500;i++) {
//		if (dp[i] > max_i) {
//			max_i = dp[i];
//			max_j = i;
//		}
//	}
//	if (max_j == 0)cout << "None";
//	else cout << max_j << " " << max_i;
//	return 0;
//}