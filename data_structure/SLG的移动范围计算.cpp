//#include <vector>
//#include <iostream>
//#include <stack>
//#include <queue>
//using namespace std;
//struct FourTree {
//	int lessHP;
//	int nowx;
//	int nowy;
//	FourTree* up;
//	FourTree* down;
//	FourTree* left;
//	FourTree* right;
//	FourTree()
//	{
//		lessHP = 0;
//		nowx = 0;
//		nowy = 0;
//		up = NULL;
//		down = NULL;
//		left = NULL;
//		right = NULL;
//	}
//};
//bool check(int w, int h, int nowx, int nowy)
//{
//	if (nowx >= w || nowy >= h || nowx < 0 || nowy < 0)return false;
//	else return true;
//}
//void FindWay(FourTree*& p, vector<vector<int>>& map, int h, int w, int x, int y, int pre, int di)
//{//1ио2об3вС4ср
//	if (p == NULL)
//	{
//		FourTree* newnode = new FourTree;
//		newnode->lessHP = pre - map[y][x];
//		newnode->nowx = x;
//		newnode->nowy = y;
//		p = newnode;
//	}
//	if (check(w, h, x + 1, y))
//	{
//		if (p->lessHP >= map[y][x + 1] && di!= 3)
//		{
//			FindWay(p->right, map, h, w, x + 1, y, p->lessHP,4);
//		}
//	}
//	if (check(w, h, x - 1, y))
//	{
//		if (p->lessHP >= map[y][x - 1] && di != 4)
//		{
//			FindWay(p->left, map, h, w, x - 1, y, p->lessHP,3);
//		}
//	}
//	if (check(w, h, x, y + 1))
//	{
//		if (p->lessHP >= map[y + 1][x] && di != 1)
//		{
//			FindWay(p->down, map, h, w, x, y + 1, p->lessHP, 2);
//		}
//	}
//	if (check(w, h, x, y - 1))
//	{
//		if (p->lessHP >= map[y - 1][x] && di != 2)
//		{
//			FindWay(p->up, map, h, w, x, y - 1, p->lessHP, 1);
//		}
//	}
//}
//void walk_tree_bfs(FourTree* root, vector<vector<int>>& find) {
//    if (root == NULL)return;
//    queue<FourTree*>q;
//    q.push(root);
//    while (!q.empty())
//    {
//        FourTree* T = q.front();
//        q.pop();
//		find[T->nowy][T->nowx] = 1;
//        if (T->down)
//        {
//            q.push(T->down);
//        }
//        if (T->left)
//        {
//            q.push(T->left);
//        }
//		if (T->right)
//		{
//			q.push(T->right);
//		}
//		if (T->up)
//		{
//			q.push(T->up);
//		}
//    }
//}
//int main()
//{
//	int h, w;
//	cin >> w >> h;
//	vector<vector<int>>map(h);
//	for (int i = 0; i < h; i++)map[i].resize(w);
//	vector<vector<int>>find(h);
//	for (int i = 0; i < h; i++)find[i].resize(w);
//	for (int i = 0; i < h; i++)
//		for (int j = 0; j < w; j++)
//			cin >> map[i][j];
//	int b, e;
//	cin >> b >> e;
//	int Hp;
//	cin >> Hp;
//	FourTree* head = new FourTree;
//	head->lessHP = Hp;
//	head->nowx = b; head->nowy = e;
//	FindWay(head, map, h, w, b, e, Hp, 0);
//	walk_tree_bfs(head, find);
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//			cout << find[i][j];
//		cout << endl;
//	}
//	return 0;
//}