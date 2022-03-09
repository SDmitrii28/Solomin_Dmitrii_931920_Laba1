#ifndef PERSON_KEEPER_H
#define PERSON_KEEPER_H
#include <QTextStream>
#include <QFile>
#include <QString>
#include "Stack.h"

//Singleton
class PersonKeeper
{
private:
    PersonKeeper(); // конструкторы по умолчанию
    PersonKeeper(const PersonKeeper &); //конструктор копирования
    ~PersonKeeper();//деструктор
    PersonKeeper &operator=(const PersonKeeper &); //оператор присовения
public:
    static PersonKeeper &Instance(); // хранится единственный экземпляр класса
    void ReadPersons(QString path); //записать ФИО в файл
    void WritePersons(QString path) const; //считать ФИО из файла
    QStringList ToQStringList() const; //экспорт стэка в список строк
    int Size(); // количество ФИО
    void Clear(); // очистить список ФИО

};
#endif // PERSON_KEEPER_H
