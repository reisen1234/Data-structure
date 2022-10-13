//#include <iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//struct node {
//	int begin;
//	int end;
//	int weight;
//};
//bool campare(node d1, node d2)
//{
//	return (d1.weight < d2.weight);
//}
//int Find_parent(int a, vector<int>parent)
//{
//	while (a != parent[a])a = parent[a];
//	return a;
//}
//int main()
//{
//	int d, l, count = 0;
//	cin >> d >> l;
//	vector<node>father(l);
//	vector<int>Parent(d);
//	for (int i = 0; i < Parent.size(); i++)
//	{
//		Parent[i] = i;
//	}
//	for (int i = 0; i < l; i++)
//	{
//		cin >> father[i].begin >> father[i].end >> father[i].weight;
//	}
//	sort(father.begin(), father.end(),campare);
//	for (auto i = father.begin(); i != father.end(); i++)
//	{
//		int V1 = Find_parent(i->begin, Parent);
//		int V2 = Find_parent(i->end, Parent);
//		if (V1 != V2)
//		{
//			cout << i->begin << " " << i->end << endl;
//			Parent[V1] = V2;
//			count++;
//		}
//		if (count == d - 1)break;
//	}
//	return 0;
//}