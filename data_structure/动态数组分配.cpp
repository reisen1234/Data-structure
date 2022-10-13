//#include <memory.h> // 你可能会用得着
//#include <iostream>
//#include <vector>
//using namespace std;
//int* read_array(int& length) {
//    int l = 0;
//    cin >> l;
//    if (l == 0)
//    {
//        length = l;
//        return nullptr;
//    }
//    vector<int>x;
//    vector<int>y;
//    int max = 0;
//    for (int i = 0; i < l; i++)
//    {
//        int index, value;
//        cin >> index >> value;
//        x.push_back(index);
//        y.push_back(value);
//        if (index > max)max = index;
//    }
//    length = max + 1;
//    int* a = new int[max + 1];
//    for (int i = 0; i <= max; i++)
//    {
//        a[i] = 0;
//    }
//    for (int i = 0; i < l; i++)
//    {
//        a[x[i]] = y[i];
//    }
//    return a;
//}
//int main()
//{
//    int h;
//    int* a = read_array(h);
//    for (int i = 0; i < h; i++)
//    {
//        cout << a[i] << " ";
//    }
//    return 0;
//}