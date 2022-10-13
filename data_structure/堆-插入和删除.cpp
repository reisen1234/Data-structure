////struct HEAP{
////    int* data;
////    int reserved_size;
////    int cur_size;
////    HEAP(int size);
////    void push( int value );
////    int top() const;
////    void pop();
////    void show_content() const;
////};
//#include <iostream>
//using namespace std;
//HEAP::HEAP(int size) {
//    data = new int[size];
//    reserved_size = size;
//    cur_size = 0;
//    data[0] = -1;
//}
//
//void HEAP::push(int value) {
//    int i;
//    i = ++cur_size;
//    for (; data[i / 2] > value && i > 1; i /= 2)
//    {
//        data[i] = data[i / 2];
//    }
//    data[i] = value;
//}
//
//int HEAP::top() const {
//    return data[1];
//}
//
//void HEAP::pop() {
//    int parent, child;
//    int tmp = data[cur_size--];
//    for (parent = 1; parent * 2 <= cur_size; parent = child)
//    {
//        child = parent * 2;
//        if (child != cur_size && data[child] > data[child + 1])
//        {
//            child++;
//        }
//        if (tmp <= data[child])
//        {
//            break;
//        }
//        else
//        {
//            data[parent] = data[child];
//        }
//    }
//    data[parent] = tmp;
//}
//
//void HEAP::show_content() const {
//    for (auto i = 0; i <= cur_size; i++)
//    {
//        cout << data[i] << " ";
//    }
//    cout << endl;
//}
