////struct NODE{
////    int value;
////    NODE* next;
////};
//NODE* create_list() { // ��������
//    struct NODE* newnode = new struct NODE;
//    newnode->next = NULL;
//    return newnode;
//}
//
//void destroy_list(NODE* header) {// ��������
//    while (header->next != NULL)
//    {
//        struct NODE* pmove = header->next;
//        struct NODE* p = header;
//        struct NODE* d = header->next;
//        p->next = pmove->next;
//        delete d;
//    }
//    delete header;
//}
//
//bool is_list_empty(NODE* header) { // �п�
//    if (header->next == NULL)
//        return true;
//    else
//        return false;
//
//}
//
//void insert_front(NODE* header, int value) { // ������ͷ������Ԫ��
//    struct NODE* newnode = create_list();
//    newnode->value = value;
//    newnode->next = header->next;
//    header->next = newnode;
//}
//
//void insert_back(NODE* header, int value) { // ������β������Ԫ��
//    struct NODE* pmove = header;
//    struct NODE* p = pmove;
//    while (pmove != NULL)
//    {
//        p = pmove;
//        pmove = pmove->next;
//    }
//    struct NODE* newnode = create_list();
//    newnode->value = value;
//    p->next = newnode;
//}
