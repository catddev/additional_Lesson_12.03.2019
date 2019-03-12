#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstring>
#include<fstream>

using namespace std;


int main()
{

			//char ch[10];
			ifstream in_file;
			//in_file.open("Source.cpp"); //привязка к физ файлу с которого считывать будет
			//// out всегда запись, а in считывание

			//// app -открывает файл чтобы добавлять туда

			ofstream out_file; //создание переменной которая будет записывать
			//out_file.open("Out.cpp"); //создание и привязка к файлу, который будет копией

			//if (!in_file)
			//{
			//	cout << "file open error" << endl;
			//}
			//else
			//{
			//	while (!in_file.eof()) // пока не достигнем конца файла, т.е. пока считывается
			//	{
			//		in_file.read(ch, 10); // ch это буфер для копирования
			//		out_file.write(ch, 10);
			//		// read, write для сырых байтов
			//	}
			//}

			in_file.open("in.txt");
			int sum = 0, k = 0, x;
			if(!in_file)
			{
				cout << "file open error" << endl;
			}
			else
			{
				while (!in_file.eof())
				{
					in_file >> x;
					cout << x << " ";
					sum += x;
					k++;
				}
			}
			cout << endl;
			cout << "sum = " << sum << endl;
			cout << "quantity = " << k << endl << endl;


	system("pause");
	return 0;
}