#include <iostream>
#include "product.h"
#include <stdlib.h>

using namespace std;

int main()
{
    /**************************************************************************************
      � ��������� ���������� ��������� ����� ������� weight
      **********************************************************************************/
    setlocale(0,"");
    int ans,ans2;
    Product p1,p2;
    while(1)
    {
        cout<<"1.������� �� �� �����\n";
        cout<<"2.������ p1 � ����������\n";
        cout<<"3.������ p2 � ����������\n";
        cout<<"4.p1 (?) p2\n";
        cout<<"0.������� ���������\nAns: ";
        cin>>ans;
        switch(ans)
        {
        case 0:
            system("cls");
            cout<<"��������...";
            return 0;
        case 1:
            system("cls");
            cout<<"p1:\n"<<p1<<endl<<"p2:\n"<<p2;
            system("pause");
            break;
        case 2:
            system("cls");
            cout<<"������� ������ p1(char[] int int): ";
            cin>>p1;
            break;
        case 3:
            system("cls");
            cout<<"������� ������ p2(char[] int int): ";
            cin>>p2;
            break;
        case 4:
            system("cls");
            while(1)
            {
                cout<<"p1 (?) p2\n1.=\n2.>\n3.<\n4.>=\n5.<=\n6.==\n7.!=\n0.��������� �����\n";
                cin>>ans2;
                switch(ans2)
                {
                case 0:
                    goto gt1;
                case 1:
                    system("cls");
                    cout<<"p1=p2"<<endl;
                    p1=p2;
                    system("pause");
                    goto gt1;
                case 2:
                    system("cls");
                    cout<<"p1>p2 = "<<(p1>p2)<<endl;
                    system("pause");
                    goto gt1;
                case 3:
                    system("cls");
                    cout<<"p1<p2 = "<<(p1<p2)<<endl;
                    system("pause");
                    goto gt1;
                case 4:
                    system("cls");
                    cout<<"p1>=p2 = "<<(p1>=p2)<<endl;
                    system("pause");
                    goto gt1;
                case 5:
                    system("cls");
                    cout<<"p1<=p2 = "<<(p1<=p2)<<endl;
                    system("pause");
                    goto gt1;
                case 6:
                    system("cls");
                    cout<<"p1==p2 = "<<(p1==p2)<<endl;
                    system("pause");
                    goto gt1;
                case 7:
                    system("cls");
                    cout<<"p1!=p2 = "<<(p1!=p2)<<endl;
                    system("pause");
                    goto gt1;
                default:
                    system("cls");
                    cout<<"������������ ����. ��������� ��� ���.\n\n";
                    break;
                }
            }
gt1:
            system("cls");
            break;
        default:
            system("cls");
            cout<<"������������ ����. ��������� ��� ���.\n\n";
            system("pause");
            break;

        }
        system("cls");

    }
    return 0;
}
