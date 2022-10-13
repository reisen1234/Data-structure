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
//void walk_tree_lvr_no_recur(BTreeNode* root) {
//    stack <BTreeNode*>q;
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
//                cout << node->value << " ";
//            }
//            cur = node->right_child;
//        }
//    }
//}
