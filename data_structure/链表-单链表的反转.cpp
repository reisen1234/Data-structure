//NODE* reverse_list(NODE* header) { // ��ͷ�ڵ�
//    struct NODE* pre = NULL;
//    struct NODE* cur = header;
//    struct NODE* p = header->next;
//    while (cur)
//    {
//        struct NODE* tmp = cur->next;
//        cur->next = pre;
//        pre = cur;
//        cur = tmp;
//    }
//    struct NODE* head = new struct NODE;
//    if (pre->next != NULL)
//    {
//        head->next = pre;
//        p->next = NULL;
//    }
//    return head;
//}
