//// 初始化列表，size为记录的条数
//// 返回初始化的动态数组的指针
//STUDENT* init_student_list(int size) {
//    STUDENT* stu = new STUDENT[size];
//    return stu;
//}
//
//// slist为要添加的结构体数组，pos添加的位置，你可以认为直接覆盖相关位置
//// id、c_score、math_score、interview为学号、C语言成绩、数学成绩、面试成绩
//void add_one_student(STUDENT* slist, int pos, int id, int c_score, int math_score, int interview) {
//    slist[pos].id = id;
//    slist[pos].c_score = c_score;
//    slist[pos].math_score = math_score;
//    slist[pos].interview = interview;
//    slist[pos].final_score = (c_score + math_score + interview) / 3;
//}
//
//// 依次显示slist数组里的所有记录。size为数组的数目
//void show_all_students(const STUDENT* slist, int size) {
//    for (int i = 0; i < size; i++)
//    {
//        cout << slist[i].id << ' ' << slist[i].c_score << ' '
//            << slist[i].math_score << ' ' << slist[i].interview << ' ' << slist[i].final_score << endl;
//    }
//}
//
//// 销毁对应slist指向的动态数组，回收内存
//void destroy_student_list(STUDENT* slist) {
//    delete[] slist;
//}