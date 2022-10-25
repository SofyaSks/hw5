//ПЕРЕГРУЗКА ОПЕРАТОРОВ
#include <iostream>
using namespace std;

class Drob
{
private:
    int ch = 0;
    int zn = 1;


public:
    void Set_drob(int _num1, int _num2)
    {

        ch = _num1;
        zn = _num2;
    }
    void Set_ch(int _num1)
    {



        ch = _num1;

    }
    void Set_zn(int _num2)
    {
        if (_num2 != 0)
        {
            zn = _num2;
        }
        else
        {
            cout << "Error!" << endl;
        }



    }



    Drob()//дефолтный конструктор(со значениями по умолчанию и без параметров в скобочках)
    {
        ch = 0;
        zn = 1;

    }
    Drob(int _num1, int _num2)//конструктор с параметрами, любое количество параметров
    {
        ch = _num1;
        zn = _num2;

    }



    int Get_ch()
    {
        return ch;
    }
    int Get_zn()
    {
        return zn;
    }
    double Get_res()
    {
        return ch / zn;
    }
    void Print_drob()
    {
        cout << ch << "/" << zn << endl;
    }
    void Convert_(Drob tmp)
    {
        double res = (double)tmp.ch / tmp.zn;
        cout << res << endl;
    }



    Drob Plus_(Drob tmp, Drob tmp2)
    {
        Drob tmp3;
        tmp3.ch = (tmp.ch * tmp2.zn) + (tmp2.ch * tmp.zn);
        tmp3.zn = tmp.zn * tmp2.zn;
        cout << tmp3.ch << "/" << tmp3.zn << endl;
        return tmp3;
    }

    Drob Sub_(Drob tmp, Drob tmp2)
    {
        Drob tmp3;
        tmp3.ch = (tmp.ch * tmp2.zn) - (tmp2.ch * tmp.zn);
        tmp3.zn = tmp.zn * tmp2.zn;
        cout << tmp3.ch << "/" << tmp3.zn << endl;
        return tmp3;
    }

    Drob operator +(Drob n) { // operator это типа d1 а n это d2
        Drob tmp3;
        tmp3.ch = ch * n.zn + n.ch * zn;
        tmp3.zn = zn * n.zn;
        cout << tmp3.ch << "/" << tmp3.zn << endl;
        return tmp3;
    }

    Drob operator -(Drob n) { // operator это типа d1 а n это d2
        Drob tmp3;
        tmp3.ch = ch * n.zn - n.ch * zn;
        tmp3.zn = zn * n.zn;
        cout << tmp3.ch << "/" << tmp3.zn << endl;
        return tmp3;
    }

    Drob operator*(Drob n) {
        Drob tmp3;
        tmp3.ch = ch * n.ch;
        tmp3.zn = zn * n.zn;
        return tmp3;
    }
    Drob operator*(int n) {
        Drob tmp3;
        tmp3.ch *= n;
        return tmp3;
    }

    

    /* Drob operator*(Drob n) {
         Drob tmp3;
         tmp3.ch *= n;
         return tmp3;
     }*/

    Drob operator ++(int n) { // int n - заглушка для постфиксной записи инкременции 
        ch += zn;
        zn = zn;
        return *this;
    }

    Drob operator ++() { // для префиксной инкременции
        ch += zn;
        zn = zn;
        return *this;
    }

    bool operator >(Drob n) {
        return (double)ch / zn > n.ch / n.zn;
    }

    Drob operator/(Drob n) {
            Drob tmp3;
            tmp3.ch = ch * n.zn;
            tmp3.zn = zn * n.ch;
            return tmp3;
        
    }

        Drob operator/(int n) {
            Drob tmp3;
            tmp3.ch /= n;
            return tmp3;
        }

        bool operator <(Drob n) {
            return (double)ch / zn < n.ch / n.zn;
        }

        bool operator ==(Drob n) {
            return (double)ch / zn == n.ch / n.zn;
        }

        bool operator !=(Drob n) {
            return (double)ch / zn != n.ch / n.zn;
        }

        Drob operator --(int n) { 
            ch -= zn;
            zn = zn;
            return *this;
        }

        Drob operator --() { 
            ch -= zn;
            zn = zn;
            return *this;
        }
};

void main() {
    Drob d1(2, 3);
    Drob d2(3, 5);
    Drob res;
    //res.Plus_(d1, d2);
   /* res = d1 + d2;
    res.Print_drob();
    res = d1 - d2;
    res.Print_drob();
    res = d1 * d2;
    res.Print_drob();
    res = d1 * 5;
    res.Print_drob();*/
    //res = 5 * d1;
    //res.Print_drob();
    //d1++;
    //d1.Print_drob();
    //++d1;
    //d1.Print_drob();
    //cout << (d1 > d2) << endl;

    // Домашнее задание 

    res = d1/d2;
    res.Print_drob();
    cout << (d1 > d2) << endl;
    cout << (d1 < d2) << endl;
    cout << (d1 == d2) << endl;
    cout << (d1 != d2) << endl;
    res--;
    res.Print_drob();
}