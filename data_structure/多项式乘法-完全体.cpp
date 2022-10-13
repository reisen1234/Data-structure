//#include <iostream>
//using namespace std;
//#include<iostream>
//
//using namespace std;
//struct PolyNode {
//    int coef;
//    int pow;
//    PolyNode* next{ nullptr };
//};
//PolyNode* polynomial_times_term(const PolyNode* p1, int coef, int pow) {
//    PolyNode* new_head = new PolyNode;
//    PolyNode* p = new_head;
//    PolyNode* pmove = p1->next;
//    while (pmove) {
//        PolyNode* newnode = new PolyNode;
//        newnode->coef = pmove->coef * coef;
//        newnode->pow = pmove->pow + pow;
//        p->next = newnode;
//        p = newnode;
//        pmove = pmove->next;
//    }
//    return new_head;
//}
//PolyNode* polynomial_add(const PolyNode* p1, const PolyNode* p2) {
//    PolyNode* p1move = NULL;
//    PolyNode* p2move = NULL;
//    if (p1) p1move = p1->next;
//    if (p2) p2move = p2->next;
//    PolyNode* new_head = new PolyNode;
//    PolyNode* P = new_head;
//    while (p1move && p2move) {
//        if (p1move->pow == p2move->pow) {
//            if (p1move->coef + p2move->coef != 0)
//            {
//                PolyNode* newnode = new PolyNode;
//                newnode->pow = p1move->pow;
//                newnode->coef = p1move->coef + p2move->coef;
//                P->next = newnode;
//                P = newnode;
//            }
//            p1move = p1move->next;
//            p2move = p2move->next;
//        }
//        else if (p1move->pow < p2move->pow) {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p1move->pow;
//            newnode->coef = p1move->coef;
//            P->next = newnode;
//            P = newnode;
//            p1move = p1move->next;
//        }
//        else {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p2move->pow;
//            newnode->coef = p2move->coef;
//            P->next = newnode;
//            P = newnode;
//            p2move = p2move->next;
//        }
//    }
//    
//    if (p1move) {
//        while (p1move) {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p1move->pow;
//            newnode->coef = p1move->coef;
//            P->next = newnode;
//            P = newnode;
//            p1move = p1move->next;
//        }
//    }
//    else if (p2move) {
//        while (p2move) {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p2move->pow;
//            newnode->coef = p2move->coef;
//            P->next = newnode;
//            P = newnode;
//            p2move = p2move->next;
//        }
//    }
//    return new_head;
//}
//void destroy_list(PolyNode* header) {// 销毁链表
//    if (header == NULL)return;
//    while (header->next != NULL)
//    {
//        struct PolyNode* pmove = header->next;
//        struct PolyNode* p = header;
//        struct PolyNode* d = header->next;
//        p->next = pmove->next;
//        delete d;
//    }
//    delete header;
//}
//PolyNode* polynomial_times(const PolyNode* p1, const PolyNode* p2) {
//    PolyNode* pmove = p1->next;
//    PolyNode* tmp = p1->next;
//    PolyNode* k = NULL;
//    PolyNode* s = NULL;
//    PolyNode* ans = NULL;
//    while (pmove) {
//        int coef = pmove->coef;
//        int pow = pmove->pow;
//        k = polynomial_times_term(p2, coef, pow);
//        s = ans;
//        ans = polynomial_add(k, s);
//        destroy_list(k);
//        destroy_list(s);
//        pmove = pmove->next;
//    }
//    return ans;
//}
//PolyNode* create_list() { // 创建链表
//    struct PolyNode* newnode = new struct PolyNode;
//    newnode->next = NULL;
//    return newnode;
//}
//void insert_back(PolyNode* header, int coef, int pow) { // 在链表尾部插入元素
//    struct PolyNode* pmove = header;
//    struct PolyNode* p = pmove;
//    while (pmove != NULL)
//    {
//        p = pmove;
//        pmove = pmove->next;
//    }
//    struct PolyNode* newnode = create_list();
//    newnode->coef = coef;
//    newnode->pow = pow;
//    p->next = newnode;
//}
//int main() {
//    int n, p1,p2,c1,c2;
//    cin >> n;
//    PolyNode* head1 = new PolyNode;
//    PolyNode* head2 = new PolyNode;
//    while (n--)
//    {
//        cin >> c1 >> p1;
//        cin >> c2 >> p2;
//        insert_back(head1, c1, p1);
//        insert_back(head2, c2, p2);
//    }
//    PolyNode* newnode = polynomial_times(head1, head2);
//    return 0;
//}