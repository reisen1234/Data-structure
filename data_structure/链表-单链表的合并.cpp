////struct NODE {
////    int value{0};
////    NODE* next{nullptr};
////};
//
//NODE* list_union(NODE* list1, NODE* list2) {
//    struct NODE* pmove = list1->next;
//    struct NODE* p = list2->next;
//    int k = 0;
//    while (pmove != NULL)
//    {
//
//        while (p != NULL)
//        {
//            if (p->value == pmove->value)
//            {
//                k = 1;
//                break;
//            }
//            p = p->next;
//        }
//        if (k == 0)
//        {
//            struct NODE* newnode = new struct NODE;
//            newnode->value = pmove->value;
//            newnode->next = list2->next;
//            list2->next = newnode;
//        }
//        else
//        {
//            k = 0;
//        }
//        pmove = pmove->next;
//        p = list2->next;
//    }
//    return list2;
//}