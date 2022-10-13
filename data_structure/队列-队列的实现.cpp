////struct LOOP_QUEUE {
////    int* base;
////    int* front;
////    int* rear;
////    int  capacity;
////    int  size;
////
////    LOOP_QUEUE( int n );
////    ~LOOP_QUEUE();
////    void in( int value );
////    int  front_element() const;
////    void out();
////    bool empty() const;
////    bool full() const;
////};
//
//// 构造函数，初始化
//// 队列预留n个元素
//int F = 0, R = 0;
//LOOP_QUEUE::LOOP_QUEUE(int n) {
//    capacity = n;
//    base = new int[n];
//    front = NULL;
//    size = 0;
//}
//
//// 销毁，回收内存
//LOOP_QUEUE::~LOOP_QUEUE() {
//    delete[] base;
//    base = NULL;
//}
//
//// 进队列，元素值为value
//void LOOP_QUEUE::in(int value) {
//    base[R] = value;
//    R = (R + 1) % capacity;
//    size++;
//}
//
//// 获得队头元素的值
//int  LOOP_QUEUE::front_element() const {
//    int a = base[F];
//    return a;
//}
//
//// 出队列
//void LOOP_QUEUE::out() {
//    F = (F + 1) % capacity;
//    size--;
//}
//
//// 判断队列是否为空
//bool LOOP_QUEUE::empty() const {
//    if (size == 0)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//
//// 判断队列是否已满
//bool LOOP_QUEUE::full() const {
//    if (size == capacity)
//        return true;
//    else
//        return false;
//}