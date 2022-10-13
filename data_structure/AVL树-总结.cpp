////PREPEND BEGIN
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//struct __MEM_ALLOC_PTR {
//    unsigned int header;
//    size_t size;
//    int    type;
//    static void* alloc_mem(size_t s, int type) {
//        size_t full_size = sizeof(__MEM_ALLOC_PTR) + s;
//        void* p = malloc(full_size);
//        __MEM_ALLOC_PTR* header = (__MEM_ALLOC_PTR*)p;
//        header->header = 0xcdcdcdcd; // magic number
//        header->size = s;
//        header->type = type; // 1 for new, 2 for new[]
//        __global_mem_counter__++;
//        __global_mem_size__ += s;
//        char* ret = (char*)p;
//        ret += sizeof(__MEM_ALLOC_PTR);
//        return ret;
//    }
//    static void free_mem(void* p, int type) {
//        char* offset = (char*)p;
//        offset -= sizeof(__MEM_ALLOC_PTR);
//        __MEM_ALLOC_PTR* header = (__MEM_ALLOC_PTR*)offset;
//        __global_mem_size__ -= header->size;
//        __global_mem_counter__--;
//        if (type != header->type) {
//            cout << "type error! mixed use of new[]/delete or new/delete[]" << endl;
//        }
//        free(offset);
//    }
//    static void check_mem() {
//        if (__global_mem_counter__ != 0 || __global_mem_size__ != 0) {
//            cout << "memory leak detected:" << endl;
//            cout << __global_mem_counter__ << " blocks unreleased" << endl;
//            cout << __global_mem_size__ << " bytes unreleased" << endl;
//        }
//    }
//private:
//    static int __global_mem_counter__;
//    static int __global_mem_size__;
//};
//int __MEM_ALLOC_PTR::__global_mem_counter__ = 0;
//int __MEM_ALLOC_PTR::__global_mem_size__ = 0;
//void* operator new(size_t s) {
//    return __MEM_ALLOC_PTR::alloc_mem(s, 1);
//}
//void* operator new[](size_t s) {
//    return __MEM_ALLOC_PTR::alloc_mem(s, 2);
//}
//void operator delete(void* p) noexcept {
//    __MEM_ALLOC_PTR::free_mem(p, 1);
//}
//void operator delete[](void* p) noexcept {
//    __MEM_ALLOC_PTR::free_mem(p, 2);
//}
//struct __MEM_REPORTER {
//    ~__MEM_REPORTER() {
//        __MEM_ALLOC_PTR::check_mem();
//    }
//} __mem_repoter__;
//#define malloc(s) __MEM_ALLOC_PTR::alloc_mem(s, 1)
//#define free(p) __MEM_ALLOC_PTR::free_mem(p, 1)
//struct BTreeNode {
//    int value{ 0 };
//    int height{ 0 };
//    BTreeNode* parent{ nullptr };
//    BTreeNode* left_child{ nullptr };
//    BTreeNode* right_child{ nullptr };
//    BTreeNode(int value) {
//        this->value = value;
//    }
//    BTreeNode() {
//        this->value = 0;
//    }
//};
//int __balance(BTreeNode* node) {
//    int left = 0;
//    if (node->left_child)
//        left = node->left_child->height;
//    int right = 0;
//    if (node->right_child)
//        right = node->right_child->height;
//    return left - right;
//}
//void __update_height(BTreeNode* node) {
//    int height = 0;
//    if (node->left_child)
//        height = node->left_child->height;
//    if (node->right_child)
//        height = max(node->right_child->height, height);
//    node->height = height + 1;
//}
//void __update_tree_height(BTreeNode* root) {
//    if (root == nullptr) {
//        return;
//    }
//    __update_tree_height(root->left_child);
//    __update_tree_height(root->right_child);
//    __update_height(root);
//}
//bool __check_avl_tree(BTreeNode* root) {
//    if (__balance(root) > 1 || __balance(root) < -1) {
//        return false;
//    }
//    if (root->left_child && root->left_child->value > root->value) {
//        return false;
//    }
//    if (root->right_child && root->right_child->value < root->value) {
//        return false;
//    }
//    if (root->left_child && (!__check_avl_tree(root->left_child))) {
//        return false;
//    }
//    if (root->right_child && (!__check_avl_tree(root->right_child))) {
//        return false;
//    }
//    return true;
//}
//void __destroy_tree(BTreeNode* node) {
//    if (node == nullptr)
//        return;
//    __destroy_tree(node->left_child);
//    __destroy_tree(node->right_child);
//    delete(node);
//}
//void __walk_tree_lvr(BTreeNode* node) {
//    if (!node)
//        return;
//    __walk_tree_lvr(node->left_child);
//    cout << node->value << " ";
//    __walk_tree_lvr(node->right_child);
//}
////PREPEND END
////TEMPLATE BEGIN    
//int height(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return node->height;
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
//    node->height = max(height(node->right_child), height(node->left_child)) + 1;
//    x->height = max(height(x->left_child), height(x->right_child)) + 1;
//    BTreeNode* P = x;
//    while (P && P->value != -1)
//    {
//        P->height = max(height(P->left_child), height(P->right_child)) + 1;
//        P = P->parent;
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
//    node->height = max(height(node->right_child), height(node->left_child)) + 1;
//    x->height = max(height(x->left_child), height(x->right_child)) + 1;
//    BTreeNode* P = x;
//    while (P && P->value != -1)
//    {
//        P->height = max(height(P->left_child), height(P->right_child)) + 1;
//        P = P->parent;
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
//int getbalance(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return height(node->left_child) - height(node->right_child);
//}
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
//void insert_avl_node(BTreeNode* root, int value) {
//    if (root && root->value == -1 && root->right_child == NULL)
//    {
//        root->right_child = new BTreeNode;
//        root->right_child->parent = root;
//        root->right_child->value = value;
//        root->height = 1;
//        return;
//    }
//    else if (root && root->value == -1)root = root->right_child;
//    BTreeNode* s = root;
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
//    if (parent && parent->value < value)
//    {
//        p = parent->right_child = new BTreeNode;
//        p->value = value;
//        p->parent = parent;
//        p->height = 1;
//    }
//    else if(parent && parent->value > value)
//    {
//        p = parent->left_child = new BTreeNode;
//        p->value = value;
//        p->parent = parent;
//        p->height = 1;
//    }
//    BTreeNode* P = parent;
//    while (P && P->value != -1)
//    {
//        P->height = max(height(P->left_child), height(P->right_child)) + 1;
//        P = P->parent;
//    }
//    while (parent && parent->value != -1)
//    {
//        int bf = getbalance(parent), lb = getbalance(parent->left_child), rb = getbalance(parent->right_child);
//        if (getbalance(parent) > 1 && getbalance(parent->left_child) > 0)rotate_ll(parent);
//        if (getbalance(parent) > 1 && getbalance(parent->left_child) < 0)rotate_lr(parent);
//        if (getbalance(parent) < -1 && getbalance(parent->right_child) > 0)rotate_rl(parent);
//        if (getbalance(parent) < -1 && getbalance(parent->right_child) < 0)rotate_rr(parent);
//        parent = parent->parent;
//    }
//}
//void remove_avl_node(BTreeNode* root, int value) {
//    BTreeNode* p = root->right_child;
//    BTreeNode* node = NULL;
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
//    if (p && p->left_child == NULL && p->right_child == NULL)//叶结点
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
//        delete(p);
//    }
//    else if (p && p->left_child && p->right_child == NULL)//只有左孩子没有右孩子
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
//        delete(p);
//    }
//    else if (p && p->right_child && p->left_child == NULL)//只有右孩子没有左孩子
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
//        delete(p);
//    }
//    else if(p && p->left_child && p->right_child)//两个结点同时存在
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
//        else if (pre->left_child && p->left_child != pre)
//        {
//            pre->parent->right_child = pre->left_child;
//            pre->left_child->parent = pre->parent;
//        }
//        else
//        {
//            pre->parent->right_child = NULL;
//        }
//        node = pre->parent;
//        delete(pre);
//    }
//    BTreeNode* P = node;
//    while (P && P->value != -1)
//    {
//        P->height = max(height(P->left_child), height(P->right_child)) + 1;
//        P = P->parent;
//    }
//    while (node && node->value != -1)
//    {
//        if (getbalance(node) == 2 && getbalance(node->left_child) == 1)rotate_ll(node);
//        if (getbalance(node) == 2 && getbalance(node->left_child) == -1)rotate_lr(node);
//        if (getbalance(node) == 2 && getbalance(node->left_child) == 0)rotate_ll(node);
//        if (getbalance(node) == -2 && getbalance(node->right_child) == -1)rotate_rr(node);
//        if (getbalance(node) == -2 && getbalance(node->right_child) == 1)rotate_rl(node);
//        if (getbalance(node) == -2 && getbalance(node->right_child) == 0)rotate_rr(node);
//        node = node->parent;
//    }
//}
////TEMPLATE END
//
////APPEND BEGIN
//int main()
//{
//    BTreeNode* root = new BTreeNode(-1);
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//        insert_avl_node(root, a);
//    }
//    cout << ((__check_avl_tree(root->right_child)) ? "right" : "wrong") << endl;
//    __walk_tree_lvr(root->right_child);
//    cout << endl;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//        remove_avl_node(root, a);
//    }
//    cout << ((__check_avl_tree(root->right_child)) ? "right" : "wrong") << endl;
//    __walk_tree_lvr(root->right_child);
//    cout << endl;
//    __destroy_tree(root);
//    return 0;
//}
////APPEND END
//
