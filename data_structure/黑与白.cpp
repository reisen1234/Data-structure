//#include<iostream>
//#include <queue>
//#include<cstring>
//using namespace std;
//bool vis[1005][1005] = { false };
//struct node {
//	int x;
//	int y;
//	node(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//};
//int main() {
//	int w, h;
//	cin >> w >> h;
//	int** map = new int* [h + 2];
//	for (int i = 1; i <= h + 1; i++) {
//		map[i] = new int[w + 2] {0};
//	}
//	for (int i = 1; i <= h; i++)
//		for (int j = 1; j <= w; j++) 
//			cin >> map[i][j];
//	int x, y;
//	cin >> x >> y; 
//	x += 1, y += 1;
//	map[y][x] = 2;
//	node k[4] = { node(x,y + 1),node(x,y - 1),node(x + 1,y),node(x - 1,y) };
//	for (int i = 0; i < 4; i++) {
//		if (map[k[i].y][k[i].x] == 1 && vis[k[i].y][k[i].x] == false) {
//			int flag = 0;
//			queue<node>arr;
//			arr.push(node(k[i].x, k[i].y));
//			while (!arr.empty()) {
//				int tx = arr.front().x, ty = arr.front().y;
//				if (tx >= 1 && tx <= w && ty >= 1 && ty <= h)
//				{
//					if (map[ty][tx] == 0) {
//						flag = 1;
//						break;
//					}
//					else if (vis[ty][tx] == true)arr.pop();
//					else if (map[ty][tx] == 1) {
//						vis[ty][tx] = true;
//						arr.push(node(tx, ty + 1));
//						arr.push(node(tx, ty - 1));
//						arr.push(node(tx + 1, ty));
//						arr.push(node(tx - 1, ty));
//					}
//					else if (map[ty][tx] == 2) {
//						arr.pop();
//					}
//				}
//				else arr.pop();
//			}
//			if (flag != 1) {
//				for (int i = 1; i <= h; i++) {
//					for (int j = 1; j <= w; j++)
//						if (vis[i][j] == true)map[i][j] = 0;
//				}
//				break;
//			}
//			else memset(vis, false, sizeof(vis));
//		}
//	}
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= w; j++) 
//			cout << map[i][j];
//		cout << endl;
//	}
//	return 0;
//}