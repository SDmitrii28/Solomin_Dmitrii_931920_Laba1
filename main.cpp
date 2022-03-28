#include <QCoreApplication>
#include "Stack.h"
#include <iostream>
#include <cstring>
#include <QString>
#include "person_keeper.h"
#include <QFile>
using namespace std;
//int main(int argc, char *argv[])
int main()
{
    //QCoreApplication a(argc, argv);
    Stack<int> s1;
    Stack<float> s2;
    Stack<string> s3;
    for(int i=0;i<10;i++){
        s1.Push(i);
    }
    cout<<"Stack output of type int: ";
    s1.Enum([&](const int &k){
        cout<<k<<" ";
    });
    s2.Push(1.2398);
    s2.Push(2.38);
    s2.Push(9.048);
    cout << endl;
    cout<<"Stack output of type float: ";
    s2.Enum([&](const float &k){
        cout<<k<<" ";
    });
    s3.Push("Vasilevich");
    s3.Push("Ivan");
    s3.Push("Ivanov");

    cout << endl;
    cout<<"Stack output of type string: ";
    s3.Enum([&](const string &k){
        cout << k<<" ";
    });
    cout <<endl;
    PersonKeeper &persorKeep(PersonKeeper::Instance());
    QString path1 = "name.txt";
    QString path2 = "name_out.txt";
    persorKeep.Clear(); // удаляем имена
    persorKeep.ReadPersons(path1); // считываем имена из файла
    persorKeep.WritePersons(path2); // записываем имена в файл
    return 1;//a.exec();
}
