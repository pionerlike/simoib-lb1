#include<iostream>
using namespace std;
int main()
{
	char message[100], ch;
	int i, key;
	setlocale( LC_ALL,"rus" );
	cout << "������� ����� ��� �����������: ";
	cin.getline(message, 100);
	cout << "������� ����: ";
	cin >> key;
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
			message[i] = ch;
		}
	}
	cout << "�������������� �����: " << message;
	return 0;
}
