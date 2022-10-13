//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//struct BTreeNode {
//    int value;
//    BTreeNode* left_child;
//    BTreeNode* right_child;
//    BTreeNode()
//        :value(0)
//        , left_child(nullptr)
//        , right_child(nullptr)
//    {}
//    BTreeNode(int v)
//        :value(v)
//        , left_child(nullptr)
//        , right_child(nullptr)
//    {}
//};
//void fwolktree(BTreeNode* root)//µ›πÈœ»–Ú
//{
//    if (root)
//    {
//        cout << root->value << " ";
//        fwolktree(root->left_child);
//        fwolktree(root->right_child);
//    }
//}
//void Insert(int x, BTreeNode*& root)
//{
//    if (root == nullptr)
//    {
//        root = new BTreeNode;
//        root->value = x;
//    }
//    else
//    {
//        if (root->value > x)
//        {
//            Insert(x, root->left_child);
//        }
//        else if (root->value < x)
//        {
//            Insert(x, root->right_child);
//        }
//    }
//}
//
//int main()
//{
//    int a = 0, f = 0;
//    char c = 0;
//    static BTreeNode* T = nullptr;
//    while (1)
//    {
//        cin >> a;
//        Insert(a, T);
//        c = getchar();
//        if (c == '\n')
//        {
//            break;
//        }
//    }
//    fwolktree(T);
//    return 0;
//}
