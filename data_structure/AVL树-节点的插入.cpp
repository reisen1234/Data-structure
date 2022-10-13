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
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//int height(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return 1 + max(height(node->left_child), height(node->right_child));
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
//    if (p->value == -1)
//    {
//        p->right_child = x;
//    }
//    else
//    {
//        if (p->value > x->value)
//        {
//            p->left_child = x;
//        }
//        else if (p->value < x->value)
//        {
//            p->right_child = x;
//        }
//    }
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
//    node->parent = x;
//    if (p->value == -1)
//    {
//        p->right_child = x;
//    }
//    else
//    {
//        if (p->value > x->value)
//        {
//            p->left_child = x;
//        }
//        else if (p->value < x->value)
//        {
//            p->right_child = x;
//        }
//    }
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
//    if (p->value == -1)
//    {
//        p->right_child = x;
//    }
//    else
//    {
//        if (p->value > x->value)
//        {
//            p->left_child = x;
//        }
//        else if (p->value < x->value)
//        {
//            p->right_child = x;
//        }
//    }
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
//    node->parent = x;
//    if (p->value == -1)
//    {
//        p->right_child = x;
//    }
//    else
//    {
//        if (p->value > x->value)
//        {
//            p->left_child = x;
//        }
//        else if (p->value < x->value)
//        {
//            p->right_child = x;
//        }
//    }
//}
//int getbalance(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return height(node->left_child) - height(node->right_child);
//}
//void insert_avl_node(BTreeNode* root, int value)
//{
//    BTreeNode* s = root;
//    if (root && root->value == -1 && root->right_child == NULL)
//    {
//        root->right_child = new BTreeNode;
//        root->right_child->parent = root;
//        root->right_child->value = value;
//        root->height = 1;
//        return;
//    }
//    else if (root && root->value == -1)root = root->right_child;
//    BTreeNode* p = root;
//    BTreeNode* parent = NULL;
//    while (p)
//    {
//        if (p->value < value)
//        {
//            parent = p;
//            p = p->right_child;
//        }
//        else
//        {
//            parent = p;
//            p = p->left_child;
//        }
//    }
//    if (parent->value < value)
//    {
//        p = parent->right_child = new BTreeNode;
//        p->value = value;
//        p->parent = parent;
//        p->height = 1;
//    }
//    else
//    {
//        p = parent->left_child = new BTreeNode;
//        p->value = value;
//        p->parent = parent;
//        p->height = 1;
//    }
//    while (parent->value != -1)
//    {
//        int bf = getbalance(parent);
//        int lb = getbalance(parent->left_child);
//        int rb = getbalance(parent->right_child);
//        if (bf > 1)
//        {
//
//            if (lb >= 1)
//            {
//                rotate_ll(parent);
//            }
//            else if (lb <= -1)
//            {
//                rotate_lr(parent);
//            }
//            break;
//        }
//        else if (bf < -1)
//        {
//            if (rb <= -1)
//            {
//                rotate_rr(parent);
//            }
//            else if (rb >= 1)
//            {
//                rotate_rl(parent);
//            }
//            break;
//        }
//        parent = parent->parent;
//    }
//}
//int max(int a, int b)
//{
//    return a > b ? a : b;
//}