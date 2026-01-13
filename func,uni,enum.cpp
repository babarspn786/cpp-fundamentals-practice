#include <iostream>
using namespace std;

typedef struct employee{
    int eid;
    string sector;
    double salary;
}naukar;

union payment{
    float upi;
    int cash;
    char c;
};

enum days{Monday , Tuesday, Weednesday, Thursday , Frinday, Saturday};

int main (){

    struct employee Vishu;
    Vishu.eid = 990;
    Vishu.sector = "Junior developer";
    Vishu.salary = 120000;

    cout << Vishu.eid << endl;
    cout << Vishu.sector << endl;
    cout << Vishu.salary << endl;

    naukar sparsh;
    sparsh.eid = 998;
    sparsh.sector = "Mid develooper";
    sparsh.salary = 120000;

    cout << sparsh.eid << endl;
    cout << sparsh.sector << endl;
    cout << sparsh.salary << endl;

    union payment p1;
    p1.upi = 998;
    p1.c = 'd';
    cout << p1.c << endl;

    cout << days(Thursday);


    return 0;
}