//// ��ʼ���б�sizeΪ��¼������
//// ���س�ʼ���Ķ�̬�����ָ��
//STUDENT* init_student_list(int size) {
//    STUDENT* stu = new STUDENT[size];
//    return stu;
//}
//
//// slistΪҪ��ӵĽṹ�����飬pos��ӵ�λ�ã��������Ϊֱ�Ӹ������λ��
//// id��c_score��math_score��interviewΪѧ�š�C���Գɼ�����ѧ�ɼ������Գɼ�
//void add_one_student(STUDENT* slist, int pos, int id, int c_score, int math_score, int interview) {
//    slist[pos].id = id;
//    slist[pos].c_score = c_score;
//    slist[pos].math_score = math_score;
//    slist[pos].interview = interview;
//    slist[pos].final_score = (c_score + math_score + interview) / 3;
//}
//
//// ������ʾslist����������м�¼��sizeΪ�������Ŀ
//void show_all_students(const STUDENT* slist, int size) {
//    for (int i = 0; i < size; i++)
//    {
//        cout << slist[i].id << ' ' << slist[i].c_score << ' '
//            << slist[i].math_score << ' ' << slist[i].interview << ' ' << slist[i].final_score << endl;
//    }
//}
//
//// ���ٶ�Ӧslistָ��Ķ�̬���飬�����ڴ�
//void destroy_student_list(STUDENT* slist) {
//    delete[] slist;
//}