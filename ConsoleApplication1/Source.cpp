#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstring>
#include<fstream>

using namespace std;


int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn; cin.get();

		switch (tn)
		{
		case 1:
		{
			ifstream in_file;
			in_file.open("Source.cpp"); //привязка к физ файлу с которого считывать будет
			// out всегда запись, а in считывание

			ofstream out_file; //создание переменной которая будет записывать
			out_file.open("Out.cpp"); //создание и привязка к файлу, который будет копией

			char ch;

			if (!in_file)
			{
				cout << "file open error" << endl;
			}
			else
			{
				while (!in_file.eof()) // пока не достигнем конца файла
				{
					in_file.get(ch); // ch это буфер для копирования
					out_file << ch;
				}
			}

		}
		break;
		case 2:
		{

		}
		break;
		case 3:
		{

		}
		break;
		case 4:
		{

		}
		break;
		case 5:
		{

		}
		break;
		case 6:
		{

		}
		break;
		case 7:
		{

		}
		break;
		case 8:
		{

		}
		break;
		case 9:
		{

		}
		break;
		case 10:
		{

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}