////struct BTreeNode {
////    int value;
////    BTreeNode* left_child;
////    BTreeNode* right_child;
////    BTreeNode()
////        :value(0)
////        , left_child(nullptr)
////        , right_child(nullptr)
////    {}
////    BTreeNode( int v )
////        :value(v)
////        , left_child(nullptr)
////        , right_child(nullptr)
////    {}
////};
//#include <stack>
//void walk_tree_lrv_no_recur(BTreeNode* root) {
//    stack<BTreeNode*>s;
//    BTreeNode* p = root;
//    BTreeNode* pre = root;
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
//                cout << p->value << " ";
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