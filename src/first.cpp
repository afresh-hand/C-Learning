#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>

using namespace std;


struct test 
{
    char name[20];
    int ages;
};

enum spectrum {red, orange, yellow, green, blue};

// int main()
// {
//     // float a = 50.25, b = 11.17;
//     // cout.setf(ios_base::fixed, ios_base::floatfield);
//     // cout << a + b << endl;
    
//     // char数组可以直接被输出，而char32 char16 wchar都不能 会直接返回一个地址
//     // char a[] = "Felonia Ripova";
//     // char32_t b[] = U"Humber SUper Snipe";
//     // // string a= "Felonia Ripova";
//     // // string b = "Humber SUper Snipe";
//     // cout<< "example for char16 " << a << endl;
//     // cout<< "example for char32 " << b << endl;
//     // test a = {"sade", 21}, b;
//     // b = a;
//     // cout << &a.name << ":" << &b.name << endl;

//     // spectrum band = {spectrum(4000)};
//     // cout <<  band << endl;

//     double * a;
//     double (*b) [20];
//     double c[20];
//     a = new double [20];
//     // b = new double [20];
//     b = &c;
//     cout << a << ":" << a+1 << endl;
//     cout << b << ":" << b+1 <<":" << b + 2<< endl;




//     return 0;
// } 


// 清单4.21
struct inflatable
{
    char name[20];
    float volume;
    double prices;
};



int main()
{
    inflatable * ps = new inflatable;
    cout << "enter a name for inflatable item" << endl;
    cin.get(ps->name, 20);
    cout << "as "<< endl;
    cin >> (*ps).volume;
    cout << "price" << endl;
    cin >> ps->prices;

    cout << (*ps).name << ";" << ps->prices << ";" << ps->volume << endl;
    
    delete ps;
    



    return 0;
} 