//#include <queue>
//#include <stack>
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
//
//// 层先遍历
//void walk_tree_bfs(BTreeNode* root) {
//    if (root == NULL)return;
//    queue<BTreeNode*>q;
//    q.push(root);
//    while (!q.empty())
//    {
//        BTreeNode* T = q.front();
//        q.pop();
//        cout << T->value << " ";
//        if (T->left_child)
//        {
//            q.push(T->left_child);
//        }
//        if (T->right_child)
//        {
//            q.push(T->right_child);
//        }
//    }
//}
//
//// 非递归先序遍历
//void walk_tree_vlr_no_recur(BTreeNode* root) {
//    stack<BTreeNode*>s;
//    while (root != NULL || !s.empty())
//    {
//        if (root != NULL)
//        {
//            cout << root->value << " ";
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