#include <conio.h>
#include <locale.h>
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout<<"������� ������������"<<endl;
    
    char z[50]; 
    char massiv[100][100]; 
    int x,y;
    int count = 0;
 
    cout<<"\n�������� �����: ";   
    gets(z);
    int amount = strlen(z);
    cout<<"���������� ��������: "<<amount<<endl;
    cout<<"������� ���� (M x N) "<<endl<<"\n";
    cout<<"���-�� �����: ";    
    cin >> x;
    cout<<"R��-�� ��������: ";
    cin >> y;
 
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            massiv[i][j]=z[count];
            count++;
        }
    }
    cout<<"������������� �����: ";
    for(int j=0; j<y; j++)
    {
        for(int i=0; i<x; i++)
        {
                cout << massiv[i][j];
        }
    }
    cout << endl;
    return 0;
}

