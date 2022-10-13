////#include <iostream>
//using namespace std;
////
////enum RBTREECOLOR{
////    RED,
////    BLACK,
////    ROOT, // 专门定义一个root颜色方便处理
////};
////
////struct BTreeNode{
////    int value{0};
////    RBTREECOLOR color{RED};
////    BTreeNode* parent{nullptr};
////    BTreeNode* left_child{nullptr};
////    BTreeNode* right_child{nullptr};
////    BTreeNode( int value ){
////        this->value = value;
////    }
////    BTreeNode( int value, RBTREECOLOR color ){
////        this->value = value;
////        this->color = color;
////    }
////    BTreeNode(){
////        this->value = 0;
////    }
////};
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
//    if (x->color != BLACK)
//    {
//        RBTREECOLOR c = node->color;
//        node->color = x->color;
//        x->color = c;
//    }
//}
//void rotate_ll(BTreeNode* node) {//需要染色的只有node和x
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
//    if (x->color != BLACK)
//    {
//        RBTREECOLOR c = node->color;
//        node->color = x->color;
//        x->color = c;
//    }
//}
//void rotate_lr(BTreeNode* node)
//{
//    rotate_rr(node->left_child);
//    rotate_ll(node);
//}
//void rotate_rl(BTreeNode* node)
//{
//    rotate_ll(node->right_child);
//    rotate_rr(node);
//}
//void insert_rb_node(BTreeNode* root, int value) {
//    if (root && root->color == ROOT && root->right_child == NULL)//如果只有一个没有结点，则创建更结点（父亲结点为-1且没有右孩子）
//    {
//        BTreeNode* newnode = new BTreeNode;
//        newnode->color = BLACK;
//        newnode->value = value;
//        newnode->parent = root;
//        root->right_child = newnode;
//        return;
//    }
//    else if (root && root->right_child)root = root->right_child;//若有结点，则向右走
//    BTreeNode* p = root;//p结点为最后要插入的位置
//    BTreeNode* parent = NULL;//插入的结点的父结点
//    while (p)//循环寻找插入的位置
//    {
//        if (p->value > value)//若插入的值小于该点则向左走
//        {
//            parent = p;
//            p = p->left_child;
//        }
//        else//若插入的值大于该点则向右走
//        {
//            parent = p;
//            p = p->right_child;
//        }
//    }
//    if (parent && parent->value < value)//寻找插入的左右位置
//    {
//        p = parent->right_child = new BTreeNode;
//        p->value = value;
//        p->parent = parent;
//        p->color = RED;
//    }
//    else if (parent && parent->value > value)
//    {
//        p = parent->left_child = new BTreeNode;
//        p->value = value;
//        p->parent = parent;
//        p->color = RED;
//    }
//    while (p->parent && p->parent->color != ROOT)
//    {
//        //若插入结点的父亲为黑，则不调整
//        if (p->parent->color == BLACK)return;
//        //若父亲为红色，则分一下几种情况进行调整
//        if (p->parent->color == RED)
//        {
//            BTreeNode* P = p->parent;
//            BTreeNode* PP = P->parent;
//            BTreeNode* Uncle = NULL;
//            if (PP->left_child == P && PP->right_child)
//                Uncle = PP->right_child;
//            else if (PP->right_child == P)
//                Uncle = PP->left_child;
//            //需要上溢的情况
//            if (Uncle && Uncle->color == RED)
//            {
//                Uncle->color = BLACK;
//                PP->color = RED;
//                P->color = BLACK;
//                p = PP;
//            }
//            else if (PP->right_child == P && P->right_child == p)//rr型调整
//            {
//                rotate_rr(PP);
//                return;
//            }
//            else if (PP->left_child == P && P->left_child == p)//ll型调整
//            {
//                rotate_ll(PP);
//                return;
//            }
//            else if (PP->right_child == P && P->left_child == p)//rl型调整
//            {
//                rotate_rl(PP);
//                return;
//            }
//            else if (PP->left_child == P && P->right_child == p)//lr型调整
//            {
//                rotate_lr(PP);
//                return;
//            }
//        }
//    }
//    if (p->color == RED)p->color = BLACK;
//}