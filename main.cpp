#include <QCoreApplication>
#include "Stack.h"
#include <iostream>
using namespace std;
//int main(int argc, char *argv[])
int main()
{
    //QCoreApplication a(argc, argv);
    Stack<int> s;
    s.Push(1);
    s.Push(2);
    s.Pop();
    s.Push(12);
    return 1;//a.exec();
}
