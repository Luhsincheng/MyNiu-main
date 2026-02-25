//Tr0y2ooo
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int choice;
    struct wenn{
        int power=5;
        int speed=3;
        int health=100;
        int defend=10;
        int luck=7;
        int ex=0;
        int kill=0;
    };
    struct ponpon{
        int power=10;
        int speed=1;
        int health=80;
        int defend=15;
        int luck=3;
        int ex=0;
        int kill=0;
    };
    struct jimin{
        int power=2;
        int speed=10;
        int health=100;
        int defend=7;
        int luck=8;
        int ex=0;
        int kill=0;
    };
    string name;
    cout<<"請輸入你的暱稱：";
    cin>>name;
    cout<<"\nLink Start !---";
    Sleep(1000);
    cout<<"---";
    Sleep(1000);
    cout<<"---";
    Sleep(2000);
    cout<<"---";
    Sleep(1000);
    cout<<"--->\n\n";
    Sleep(1000);
    cout<<"Login Sucess!\n";
    Sleep(3000);
    cout<<"你好!宜大學生"<<name<<'\n';
    cout<<"開始遊戲前請先做PCR檢測\n";
    int x = rand();
    if(1){
        cout<<"\n-------------------------\n";
        cout<<"|             |    |    |\n";
        cout<<"|COVID-19     C    T    |\n";
        cout<<"-------------------------\n";
        cout<<"恭喜確診88\n";
        return 0;
    }
    cout<<"請選擇角色：\n";
    cout<<"1.吳汶涓\n";
    cout<<"2.彭玉華\n";
    cout<<"3.朱志明\n";
    cin>>choice;
    while(cin>>choice){
        if(choice<1||choice>3){
            cout<<"請輸入有效數字\n";
            continue;
        }
        if(choice==1){

        }
        if(choice==2){

        }
        if(choice==3){

        }
    }
}
