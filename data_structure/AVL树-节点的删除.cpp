//
//struct BTreeNode{
//    int value{0};
//    int height{0};
//    BTreeNode* parent{nullptr};
//    BTreeNode* left_child{nullptr};
//    BTreeNode* right_child{nullptr};
//    BTreeNode( int value ){
//        this->value = value;
//    }
//    BTreeNode(){
//        this->value = 0;
//    }
//};
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
//int max(int a, int b)
//{
//    return a > b ? a : b;
//}
//void delete_avl_node(BTreeNode* root, int value) {
//    先search到该结点
//    BTreeNode* p = root->right_child;
//    BTreeNode* node;
//    while (p)
//    {
//        if (value > p->value)
//        {
//            p = p->right_child;
//        }
//        else if (value < p->value)
//        {
//            p = p->left_child;
//        }
//        else
//        {
//            break;
//        }
//    }
//    if (!p->left_child && !p->right_child)//叶结点
//    {
//        if (p->parent->value != -1)
//        {
//            if (p->parent->value > p->value)p->parent->left_child = NULL;
//            else p->parent->right_child = NULL;
//            node = p->parent;
//        }
//        else
//        {
//            p->parent->right_child = NULL;
//            node = p->parent;
//        }
//        free(p);
//    }
//    else if (p->left_child && p->right_child == NULL)//只有左孩子没有右孩子
//    {
//        BTreeNode* pre = p->left_child;
//        if (p->parent->value != -1)
//        {
//            if (p->parent->value > p->value)
//            {
//                p->parent->left_child = pre;
//                pre->parent = p->parent;
//            }
//            else
//            {
//                p->parent->right_child = pre;
//                pre->parent = p->parent;
//            }
//        }
//        else
//        {
//            p->parent->right_child = pre;
//            pre->parent = p->parent;
//        }
//        node = pre;
//        free(p);
//    }
//    else if (p->right_child && p->left_child == NULL)//只有右孩子没有左孩子
//    {
//        BTreeNode* pre = p->right_child;
//        if (p->parent->value != -1)
//        {
//            if (p->parent->value > p->value)
//            {
//                p->parent->left_child = pre;
//                pre->parent = p->parent;
//            }
//            else
//            {
//                p->parent->right_child = pre;
//                pre->parent = p->parent;
//            }
//        }
//        else
//        {
//            p->parent->right_child = pre;
//            pre->parent = p->parent;
//        }
//        node = pre;
//        free(p);
//    }
//    else//两个结点同时存在
//    {
//        BTreeNode* pre = p->left_child;
//        while (pre->right_child)
//        {
//            pre = pre->right_child;
//        }
//        p->value = pre->value;
//        if (p->left_child == pre)
//        {
//            if (pre->left_child)
//            {
//                p->left_child = pre->left_child;
//                pre->left_child->parent = p;
//            }
//            else
//            {
//                pre->parent->left_child = NULL;
//            }
//        }
//        else
//        {
//            pre->parent->right_child = NULL;
//        }
//        node = pre->parent;
//        free(pre);
//    }
//    while (node->value != -1)
//    {
//        int bf = getbalance(node);
//        int lb = getbalance(node->left_child);
//        int rb = getbalance(node->right_child);
//        if (bf > 1)
//        {
//
//            if (lb >= 1)
//            {
//                rotate_ll(node);
//            }
//            else if (lb <= -1)
//            {
//                rotate_lr(node);
//            }
//            else if (lb == 0 && rb == 0)
//            {
//                rotate_ll(node);
//            }
//            break;
//        }
//        else if (bf < -1)
//        {
//            if (rb <= -1)
//            {
//                rotate_rr(node);
//            }
//            else if (rb >= 1)
//            {
//                rotate_rl(node);
//            }
//            else if (lb == 0 && rb == 0)
//            {
//                rotate_rr(node);
//            }
//            break;
//        }
//        node = node->parent;
//    }
//    while (node->value != -1)node = node->parent;
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