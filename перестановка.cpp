#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout<<"������� ������������"<<endl;
    cout<<"������������";
    int n,m;
    char d[50];
    char massiv[100][100];
    int count = 0;
    cout<<"\n�������� �����: "; 
    gets(d);
    int amount = strlen(d);
    cout<<"���������� ��������: "<<amount<<endl;
    cout<<" ������� ���� (M x N) "<<endl<<"\n";
    cout<<"���-�� �����: ";    
    cin >> m;
    cout<<"���-�� ��������: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            massiv[i][j]=d[count];
            count++;
        }
    }
    cout<<"������������� �����: ";
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
                cout << massiv[i][j];
        }
    }
    getch();
    return 0;
}

