///*
//˼·��
//��2/n��ʼ��ÿ�ε���Ϊ���ѣ�Ȼ�󽻻�ͷβ��
//��β�ų�����������Ϊ��֤ÿ�ζ������ѣ�
//��Ҫÿ�ν��еݹ�ȷ�����������ȻΪ���ѡ�
//*/
//#include <iostream>
//#include <queue>
//using namespace std;
//struct maxheap{
//	int* data;
//	int realsize;
//	int cursize;
//	maxheap(int size);
//	int top() const;
//    void makeheap(int i);
//};
//maxheap::maxheap(int size)
//{
//	data = new int[size];
//	realsize = size;
//	cursize = 0;
//	data[0] = -1;
//}
//int maxheap::top()const
//{
//	return data[1];
//}
//void maxheap::makeheap(int i)
//{
//    int child = i * 2;
//    int tmp = data[i];
//    if (child <= cursize)
//    {
//        if (child + 1 <= cursize)
//        {
//            if (data[child] < data[child + 1])
//            {
//                child++;
//            }
//            if (data[i] < data[child])
//            {
//                data[i] = data[child];
//                data[child] = tmp;
//                makeheap(child);
//            }
//        }
//        else
//        {
//            if (data[i] < data[child])
//            {
//                data[i] = data[child];
//                data[child] = tmp;
//                makeheap(child);
//            }
//        }
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    int t = n;
//    maxheap h(n + 1);
//    int y = 1;
//    while (t--)
//    {
//        int data;
//        cin >> data;
//        h.data[y++] = data;
//        h.cursize++;
//    }
//    for (int i = n / 2; i > 0; i--)
//    {
//        h.makeheap(i);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cout << h.data[j] << " ";
//        }
//        cout << endl;
//        int tmp = h.data[1];
//        h.data[1] = h.data[h.cursize];
//        h.data[h.cursize] = tmp;
//        h.cursize--;
//        for (int i = n / 2; i > 0; i--)
//        {
//            h.makeheap(i);
//        }
//    }
//    return 0;
//}