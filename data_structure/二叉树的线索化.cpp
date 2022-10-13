////struct BTreeNode {
////    int value;
////    BTreeNode* left_child;
////    BTreeNode* right_child;
////    BTreeNode* prev;
////    BTreeNode* next;
////    BTreeNode()
////        :value(0)
////        , left_child(nullptr)
////        , right_child(nullptr)
////        , prev(nullptr)
////        , next(nullptr)
////    {}
////    BTreeNode( int v )
////        :value(v)
////        , left_child(nullptr)
////        , right_child(nullptr)
////        , prev(nullptr)
////        , next(nullptr)
////    {}
////};
//#include<stack>
//#include <queue>
//// 构造先序线索
//void build_threads_vlr(BTreeNode* root) {
//    stack<BTreeNode*>s;
//    BTreeNode* pre = NULL;
//    while (root != NULL || !s.empty())
//    {
//        if (root != NULL)
//        {
//            if (pre)
//            {
//                root->prev = pre;
//                pre->next = root;
//            }
//            pre = root;
//            s.push(root);
//            root = root->left_child;
//        }
//        else
//        {
//            root = s.top();
//            s.pop();
//            root = root->right_child;
//        }
//    }
//}
//
//// 构造中序线索
//void build_threads_lvr(BTreeNode* root) {
//    stack <BTreeNode*>q;
//    BTreeNode* pre = NULL;
//    if (!root)
//    {
//        return;
//    }
//    else
//    {
//        BTreeNode* cur = root;
//        while (!q.empty() || cur)
//        {
//            while (cur)
//            {
//                q.push(cur);
//                cur = cur->left_child;
//            }
//            BTreeNode* node = q.top();
//            q.pop();
//            if (node)
//            {
//                if (pre)
//                {
//                    node->prev = pre;
//                    pre->next = node;
//                }
//                pre = node;
//            }
//            cur = node->right_child;
//        }
//    }
//}
//
//// 构造后序线索
//void build_threads_lrv(BTreeNode* root) {
//    stack<BTreeNode*>s;
//    BTreeNode* p = root;
//    BTreeNode* pre = root;
//    BTreeNode* ppre = NULL;
//    while (p || !s.empty())
//    {
//        if (p && p->left_child != pre && p->right_child != pre)
//        {
//            s.push(p);
//            p = p->left_child;
//        }
//        else
//        {
//            p = s.top();
//            if (p->right_child && p->right_child != pre)
//            {
//                p = p->right_child;
//            }
//            else
//            {
//                if (ppre)
//                {
//                    ppre->next = p;
//                    p->prev = ppre;
//                }
//                ppre = p;
//                pre = s.top();
//                s.pop();
//                if (!s.empty())
//                {
//                    p = s.top();
//                }
//                else
//                {
//                    p = NULL;
//                }
//            }
//        }
//    }
//}
