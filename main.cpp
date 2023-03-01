#include <iostream>
#include "data.h"
using namespace std;





void dataCout(int a, int b, int c, int d, int ch, int zn);
int chezlitel(int a, int b, int c, int d);
int znamenatel(int b, int d);
void vvod_danix(int& a, int& b, int& c, int& d);


int main()
{
    int cheslit, znamenat;
    setlocale(LC_ALL, "ru");
    vvod_danix(a, b, c, d);
    cheslit = chezlitel(a, b, c, d);
    znamenat = znamenatel(b, d);
    cout <<"------------"<< endl;
    cout << "Результат программы :" << endl;
    dataCout(a, b, c, d, cheslit, znamenat);
}

