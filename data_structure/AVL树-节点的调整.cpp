////struct BTreeNode{
////    int value{0};
////    int height{0};
////    BTreeNode* parent{nullptr};
////    BTreeNode* left_child{nullptr};
////    BTreeNode* right_child{nullptr};
////    BTreeNode( int value ){
////        this->value = value;
////    }
////    BTreeNode(){
////        this->value = 0;
////    }
////};
////
//#include <queue>
//#include <stack>
//int max(int a, int b)
//{
//    return a > b ? a : b;
//}
//int height(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return 1 + max(height(node->left_child), height(node->right_child));
//}
//void update_all_height(BTreeNode* node)
//{
//    queue<BTreeNode*>q;
//    q.push(node);
//    while (!q.empty())
//    {
//        BTreeNode* T = q.front();
//        T->height = height(T);
//        q.pop();
//        if (T->left_child)q.push(T->left_child);
//        if (T->right_child)q.push(T->right_child);
//    }
//}
//void rotate_rr(BTreeNode* node) {
//    BTreeNode* x = node->right_child;
//    BTreeNode* n = x->left_child;
//    BTreeNode* p = node->parent;
//    node->right_child = n;
//    if (n)n->parent = node;
//    x->left_child = node;
//    x->parent = p;
//    node->parent = x;
//    p->right_child = x;
//    update_all_height(p);
//}
//void rotate_rl(BTreeNode* node) {
//    BTreeNode* o = node->right_child;
//    BTreeNode* x = o->left_child;
//    BTreeNode* n = x->right_child;
//    BTreeNode* p = node->parent;
//    x->right_child = o;
//    o->parent = x;
//    o->left_child = n;
//    if (n)n->parent = o;
//    node->right_child = x;
//    x->parent = node;
//    BTreeNode* n1 = x->left_child;
//    x->left_child = node;
//    node->right_child = n1;
//    if (n1)n1->parent = node;
//    x->parent = p;
//    p->right_child = x;
//    node->parent = x;
//    update_all_height(p);
//}
//void rotate_ll(BTreeNode* node) {
//    BTreeNode* x = node->left_child;
//    BTreeNode* n = x->right_child;
//    BTreeNode* p = node->parent;
//    node->left_child = n;
//    if (n)n->parent = node;
//    x->right_child = node;
//    x->parent = p;
//    node->parent = x;
//    p->right_child = x;
//    update_all_height(p);
//}
//void rotate_lr(BTreeNode* node) {
//    BTreeNode* o = node->left_child;
//    BTreeNode* x = o->right_child;
//    BTreeNode* n = x->left_child;
//    BTreeNode* p = node->parent;
//    x->left_child = o;
//    o->parent = x;
//    o->right_child = n;
//    if (n)n->parent = o;
//    node->left_child = x;
//    x->parent = node;
//    BTreeNode* n1 = x->right_child;
//    x->right_child = node;
//    node->left_child = n1;
//    if (n1)n1->parent = node;
//    x->parent = p;
//    p->right_child = x;
//    node->parent = x;
//    update_all_height(p);
//}
////代码不完善，只能过数据，完善代码在AVL树的删除