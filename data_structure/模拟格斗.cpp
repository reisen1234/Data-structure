//#include <iostream>
//
//using namespace std;
//struct EQUIPMENT{
//    int atk;
//    int def;
//};
//
//struct PLAYER{
//    int HP;
//    int eqpt_count;
//    EQUIPMENT* eqpts;
//};
//
//PLAYER* read_player() {
//    PLAYER* p = new PLAYER;
//    int Hp; cin >> p->HP;
//    int num; cin >> num;
//    p->eqpt_count = num;
//    p->eqpts = new EQUIPMENT[num];
//    for (int i = 0; i < num; i++)
//    {
//        cin >> p->eqpts[i].atk >> p->eqpts[i].def;
//    }
//    return p;
//}
//
//void destory_player(PLAYER* player) {
//    delete[] player->eqpts;
//    delete player;
//}
//
//void players_fight(PLAYER* player1, PLAYER* player2) {
//    int realatk_1 = 0, realatk_2 = 0, real_def_1 = 0, real_def_2 = 0, atk_1 = 0, atk_2 = 0;
//    for (int i = 0; i < player1->eqpt_count; i++)
//    {
//        realatk_1 += player1->eqpts[i].atk;
//        real_def_1 += player1->eqpts[i].def;
//    }
//    for (int i = 0; i < player2->eqpt_count; i++)
//    {
//        realatk_2 += player2->eqpts[i].atk;
//        real_def_2 += player2->eqpts[i].def;
//    }
//    if (realatk_1 < real_def_2)
//    {
//        atk_1 = 1;
//    }
//    else
//    {
//        atk_1 = realatk_1 - real_def_2;
//    }
//    if (realatk_2 < real_def_1)
//    {
//        atk_2 = 1;
//    }
//    else
//    {
//        atk_2 = realatk_2 - real_def_1;
//    }
//    player1->HP -= atk_2;
//    player2->HP -= atk_1;
//    if (player1->HP < 0)player1->HP = 0;
//    if (player2->HP < 0)player2->HP = 0;
//}
//int main()
//{
//    PLAYER* p1 = read_player();
//    PLAYER* p2 = read_player();
//    players_fight(p1, p2);
//    cout << p1->HP << " " << p2->HP << " ";
//    destory_player(p1);
//    destory_player(p2);
//    return 0;
//}