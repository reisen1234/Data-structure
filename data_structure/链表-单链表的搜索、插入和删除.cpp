////struct NODE{
////    int value;
////    NODE* next;
////};
//NODE* find_node(NODE* header, int value) { // �����ڵ�
//    struct NODE* pmove = header->next;
//    int i = 0;
//    while (pmove)
//    {
//        if (pmove->value == value)
//        {
//            i = 1;
//            break;
//        }
//        pmove = pmove->next;
//    }
//    if (i == 1)
//        return pmove;
//    else
//        return nullptr;
//}
//
//void insert_after(NODE* node, int value) { // ����ڵ�node�ĺ��档
//    struct NODE* newnode = new struct NODE;
//    newnode->next = NULL;
//    newnode->next = node->next;
//    node->next = newnode;
//    newnode->value = value;
//}
//
//void insert_before(NODE* header, NODE* node, int value) { // �ڽڵ�node��ǰ�����
//    struct NODE* p = header;
//    while (p->next != node)
//    {
//        p = p->next;
//    }
//    struct NODE* newnode = new struct NODE;
//    newnode->value = value;
//    newnode->next = node;
//    p->next = newnode;
//}
//
//void remove_node(NODE* header, NODE* node) { // �Ƴ��ڵ�node
//    struct NODE* pmove = header;
//    while (pmove)
//    {
//        if (pmove->next == node)
//        {
//            break;
//        }
//        pmove = pmove->next;
//    }
//    pmove->next = node->next;
//    delete node;
//}