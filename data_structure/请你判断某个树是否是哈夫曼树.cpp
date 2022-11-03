//#include<vector>
//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
////struct BTreeNode{
//   // int value{0};
//   // BTreeNode* left_child{nullptr};
////BTreeNode* right_child{nullptr};
////};
//vector<int>tree;
//struct Heap {
//    struct BTreeNode* data;
//    int reserved_size;
//    int cur_size;
//    Heap(int size);
//    void push(BTreeNode v);
//    BTreeNode top() const;
//    void pop();
//};
//Heap::Heap(int size) {
//    data = new struct BTreeNode[size];
//    reserved_size = size;
//    cur_size = 0;
//    data[0].value = -1;
//}
//void Heap::push(BTreeNode v) {
//    int i;
//    i = ++cur_size;
//    for (; i > 1 && data[i / 2].value > v.value; i /= 2)
//    {
//        data[i].value = data[i / 2].value;
//    }
//    data[i] = v;
//}
//BTreeNode Heap::top() const {
//    return data[1];
//}
//void Heap::pop() {
//    int parent, child;
//    BTreeNode tmp = data[cur_size--];
//    for (parent = 1; parent * 2 <= cur_size; parent = child)
//    {
//        child = parent * 2;
//        if (child != cur_size && data[child].value > data[child + 1].value)
//        {
//            child++;
//        }
//        if (tmp.value <= data[child].value)
//        {
//            break;
//        }
//        else
//        {
//            data[parent] = data[child];
//        }
//    }
//    data[parent] = tmp;
//}
//BTreeNode* Deletemin(Heap* h)
//{
//    BTreeNode* tmp = new BTreeNode;
//    *tmp = h->top();
//    h->pop();
//    return tmp;
//}
//int s = 0;
//int s1 = 0;
//void woke_tree(BTreeNode* root) {
//    if (!root->left_child && !root->right_child)tree.push_back(root->value);
//    else
//    {
//        if (root->left_child)woke_tree(root->left_child);
//        if (root->right_child)woke_tree(root->right_child);
//    }
//}
//void count_(BTreeNode* root, int path) {
//    if (root->left_child == nullptr && root->right_child == nullptr) {
//        s += path * root->value;
//    }
//    else {
//        if (root->left_child) {
//            count_(root->left_child, path + 1);
//        }
//        if (root->right_child) {
//            count_(root->right_child, path + 1);
//        }
//    }
//}
//void count_1(BTreeNode* root, int path) {
//    if (root->left_child == nullptr && root->right_child == nullptr) {
//        s1 += path * root->value;
//    }
//    else {
//        if (root->left_child) {
//            count_1(root->left_child, path + 1);
//        }
//        if (root->right_child) {
//            count_1(root->right_child, path + 1);
//        }
//    }
//}
//BTreeNode* create_huffman_tree() {
//    Heap H(2 * tree.size());
//    BTreeNode* T = NULL;
//    for (auto i = tree.begin(); i != tree.end(); i++)
//    {
//        BTreeNode* Tmp = new BTreeNode;
//        Tmp->value = *i;
//        H.push(*Tmp);
//    }
//    int b = H.cur_size;
//    BTreeNode* tmp = NULL;
//    for (int i = 1; i < b; i++)
//    {
//        T = new BTreeNode;
//        T->left_child = Deletemin(&H);
//        T->right_child = Deletemin(&H);
//        T->value = T->left_child->value + T->right_child->value;
//        H.push(*T);
//    }
//    return T;
//}
//bool is_tree_huffman_tree(BTreeNode* root, int& correct) {
//    woke_tree(root);
//    BTreeNode* R = create_huffman_tree();
//    count_(root, 0);
//    count_1(R, 0);
//    if (s == s1) {
//        correct = s;
//        return true;
//    }
//    else {
//        correct = s1;
//        return false;
//    }
//}
