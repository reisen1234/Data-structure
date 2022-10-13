//#include<iostream>
//using namespace std;
//struct DUAL_NODE {
//	DUAL_NODE* next;
//    DUAL_NODE* prev;
//    int color;
//};
//void remove_DUAL_NODE(DUAL_NODE* DUAL_NODE) {
//	struct DUAL_NODE* pmove = DUAL_NODE;
//	DUAL_NODE->prev->next = DUAL_NODE->next;
//	DUAL_NODE->next->prev = DUAL_NODE->prev;
//	delete DUAL_NODE;
//}
//void insert_after(DUAL_NODE* node, int value) {
//    struct DUAL_NODE* newnode = new struct DUAL_NODE;
//    newnode->next = NULL;
//    newnode->prev = NULL;
//    newnode->color = value;
//    if (node->next == node)
//    {
//        node->next = newnode;
//        node->prev = newnode;
//        newnode->prev = node;
//        newnode->next = node;
//    }
//    else
//    {
//        node->next->prev = newnode;
//        newnode->next = node->next;
//        node->next = newnode;
//        newnode->prev = node;
//    }
//}
//void hit_zuma_chain(DUAL_NODE* head, int pos, int color) {
//    DUAL_NODE* pmove = head->next;
//    int data = pos;
//    while (data--)
//    {
//        pmove = pmove->next;
//    }
//    insert_after(pmove, color);
//    DUAL_NODE* node = pmove->next;
//    while (1)
//    {
//        DUAL_NODE* left = node->prev;
//        DUAL_NODE* right = node;
//        int num = 0;
//        while (left != head && left->color == node->color && ++num)left = left->prev;
//        while (right != head && right->color == node->color && ++num)right = right->next;
//        DUAL_NODE* S = left->next;
//        if (num >= 3)
//        {
//            left->next = right;
//            right->prev->next = NULL;
//            right->prev = left;
//        }
//        else break;
//        while (S)
//        {
//            DUAL_NODE* tmp = S;
//            S = S->next;
//            delete tmp;
//        }
//        if (left->color == right->color && left!=right)
//        {
//            node = left;
//        }
//        else break;
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    DUAL_NODE* head = new DUAL_NODE;
//    head->next = head;
//    head->prev = head;
//    head->color = 99999;
//    DUAL_NODE* pmove = head;
//    for (int i = 0; i < n; i++)
//    {
//        int a = 0;
//        cin >> a;
//        insert_after(pmove, a);
//        pmove = pmove->next;
//    }
//    int pos, color;
//    cin >> pos >> color;
//    hit_zuma_chain(head, pos, color);
//    pmove = head->next;
//    while (pmove != head) {
//        cout << pmove->color << " ";
//        pmove = pmove->next;
//    }
//    return 0;
//}
