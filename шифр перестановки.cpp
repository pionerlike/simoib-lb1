#include <conio.h>
#include <locale.h>
#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout<<"Простая Перестановка"<<endl;
    
    char z[50]; 
    char massiv[100][100]; 
    int x,y;
    int count = 0;
 
    cout<<"\nИсходное слово: ";   
    gets(z);
    int amount = strlen(z);
    cout<<"Количество символов: "<<amount<<endl;
    cout<<"Введите ключ (M x N) "<<endl<<"\n";
    cout<<"Кол-во строк: ";    
    cin >> x;
    cout<<"Rол-во столбцов: ";
    cin >> y;
 
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            massiv[i][j]=z[count];
            count++;
        }
    }
    cout<<"Зашифрованное слово: ";
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

