#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void ReadFile()
{
    setlocale(LC_ALL, "RUS");
    ifstream file; // создаем объект класса ifstream
    file.open("C:\\Users\\stydent\\Desktop\\Stroki.dat"); // открываем файл
    const int N = 1000;
    cout << endl << "ReadFile: " << endl << endl; //Для красоты 
    char S[N] = {""}; //В S будут считываться строки 

    while (!file.eof()) //Будем читать информацию пока не дойдем до конца файла
    {
        file.getline(S, N); //Построчное считывание информации в S 
        cout << S << endl; //Вывод очередной строки на экран 
    }
    file.close();  //Закрыли открытый файл
}

int main()
{


    //0
    // Проверка на открытость файла

    setlocale(LC_ALL, "rus");
    ifstream file; // создаем объект класса ifstream
    file.open("C:\\Users\\stydent\\Desktop\\Stroki.dat"); // открываем файл

    

    if (file.is_open()) // вызов метода is_open()
        cout << "Файл открыт!" << endl;
    else
    {
        cout << "Файл не открыт!" << endl;
    }

    //1
    // Выводит текст на экран дисплея
    ReadFile();


    //2
    // Определяет кол-во символов в самом коротком слове
    


    //3 
    // Выделяет слово с мин кол-вом символов



}