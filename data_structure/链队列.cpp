////struct Node{
////    int     value;
////    Node*   next{nullptr};
////};
////
////struct LinkQueue{
////    // ���Բ�ȫ��ʹ��
////    Node* header{nullptr};
////    Node* front{nullptr};
////    Node* tail{nullptr};
////
////    LinkQueue();
////    ~LinkQueue();
////
////    void in( int value );
////    void out();
////    int  front_element( ) const;
////    bool empty() const;
////};
//Node* create_list() { // ��������
//    struct Node* newnode = new struct Node;
//    newnode->next = NULL;
//    return newnode;
//}
//void destroy_list(Node* header) {// ��������
//    while (header->next != NULL)
//    {
//        struct Node* pmove = header->next;
//        struct Node* p = header;
//        struct Node* d = header->next;
//        p->next = pmove->next;
//        delete d;
//    }
//    delete header;
//}
//Node* insert_after(Node* node, int value) { // ����ڵ�node�ĺ��档
//    struct Node* newnode = new struct Node;
//    newnode->next = NULL;
//    newnode->next = node->next;
//    node->next = newnode;
//    newnode->value = value;
//    return newnode;
//}
//
//LinkQueue::LinkQueue() {   // ���캯������ʼ��
//    header = new Node;
//    tail = header;
//}
//
//LinkQueue::~LinkQueue() {  // ��������������
//    destroy_list(header);
//}
//
//void LinkQueue::in(int value) {  //��value�Ž�����
//    tail = insert_after(tail, value);
//}
//
//void LinkQueue::out() {   // ����һ��Ԫ��
//    Node* S = header->next;
//    if (S == tail) {
//        if (S->next)tail = S->next;
//        else tail = header;
//    }
//    header->next = S->next;
//    delete S;
//}
//
//int LinkQueue::front_element() const {  // ��ö�ͷԪ�ص�ֵ
//    return header->next->value;
//}
//
//bool LinkQueue::empty() const {  //�ж϶����Ƿ�Ϊ��
//    if (header->next == NULL)return true;
//    else return false;
//}
