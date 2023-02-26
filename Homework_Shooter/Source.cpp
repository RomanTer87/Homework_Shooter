#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	char COMMAND;
	cout << "\t\t!Добро пожаловать в консольную игру SHOOTER!" << endl;
	cout << "Для движения вперед нажмите - W" << endl;
	cout << "Для движения влево нажмите - A" << endl;
	cout << "Для движения вправо нажмите - D" << endl;
	cout << "Для движения назад нажмите - S" << endl;
	cout << "Для прыжка нажмите - Space" << endl;
	cout << "Для стрельбы нажмите - Enter" << endl;
	cout << "Для выхода нажмите - Escape" << endl;
	cout << "\n\n\n" << endl;

	do
	{
		COMMAND = _getch();
		switch (COMMAND)
		{
		case 'w': cout << "Вы двигаетесь вперед\n"; break;
		case 'a': cout << "Вы двигаетесь влево\n"; break;
		case 's': cout << "Вы двигаетесь назад\n"; break;
		case 'd': cout << "Вы двигаетесь вправо\n"; break;
		case ' ': cout << "Вы прыгаете\n"; break;
		}
		if (COMMAND == 13)
		{
			cout << "Вы стреляете" << endl;
		}
	} while (COMMAND != 27);
}