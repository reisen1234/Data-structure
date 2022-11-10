//struct BTreeNode{
//    int value{0};
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
//#include <vector>
//#include<map>
//using namespace std;
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
//BTreeNode* create_huffman_tree(const vector<int>& values) {
//    Heap H(2 * values.size());
//    BTreeNode* T = NULL;
//    for (auto i = values.begin(); i != values.end(); i++)
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
//int s = 0;
//void count(BTreeNode* root, int path) {
//    if (!root->left_child && !root->right_child)s += root->value * path;
//    else {
//        if (root->left_child)count(root->left_child, path + 1);
//        if (root->right_child)count(root->right_child, path + 1);
//    }
//}
//int main() {
//    vector<int>arr;
//    map<char, int>Arr;
//    char c;
//    int a, i = 0;
//    while ((c = getchar()) != EOF) {
//        ++Arr[c];
//        
//    }
//    for (auto i = Arr.begin(); i != Arr.end(); i++)
//        arr.push_back(i->second);
//    BTreeNode* root = create_huffman_tree(arr);
//    count(root, 0);
//    cout <<s;
//    return 0;
//}
