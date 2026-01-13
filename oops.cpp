#include <iostream>
using namespace std;

class employee
{
    private:
        int salary;
    
    public:
        int eId;
        string department;
        char block;

    void setdatapv (int s){
        salary = s;
    }
    void setdatapb (int e,string n, char b ){
        eId = e;
        department = n;
        block = b;
    }

    void getpdata(){
        cout << "The salary of this employee is "<<salary<<endl;
    }
};

class pet
{
    private:
        string location;
    public:
        string animal;
        string breed;
        float age;
        char gender;

    void setdatapb(string an, string b, float ag, char g)
    {
        animal = an;
        breed = b;
        age = ag;
        gender = g;
    }

    void setdatapv(string l)
    {
        location = l;
    }

    void getpbdata ()
    {
        cout << "The animal is "<<animal<<endl;
        cout << "The breed is "<<breed<<endl;
        cout << "The age of the animal is "<<age<<endl;
        cout << "The gender of animal is "<<gender<<endl;
    }

    void getpvdata()
    {
        cout << "The animal is from "<<location<<endl;
    }

};



int main (){
    
    // employee vishu;
    // vishu.setdatapb(101,"Software Engineer", 'C');
    // vishu.setdatapv(125000);

    // cout << "The eId of employee is "<<vishu.eId<<endl;
    // cout << "The department of employee is "<<vishu.department<<endl;

    // vishu.getpdata();

    pet Huraira;
    Huraira.setdatapb("Cat","Persian",5,'m');
    Huraira.setdatapv("Shahjahanpur");

    Huraira.getpbdata();


    return 0;
}



///////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;



// Remember the nesting of Function.
class binary
{
private:
    string s;

public:
    void read();
    void check_bin();
    void once_c();
    void display();
};

void binary :: read()
{
    cout << "Enter your binary number : ";
    cin >> s;
}

void binary :: check_bin()
{
    for(int i = 0 ; i<s.length() ; i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout << "The number is not in Binary "<<endl;
            exit(0);
        }
    }
}

void binary :: once_c()
{
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
}

void binary :: display()
{
    cout << "The once compliment of number is."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    
}




int main (){

    binary b;
    b.read();
    b.check_bin();
    b.once_c();
    b.display();

    return 0;
}




//////////////memory allocation in array////////////
#include <iostream>
using namespace std;

class shop
{
private:
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setprice();
    void displayprice();
    void displayallprice();
};

void shop ::setprice()
{
    cout << "Enter the Id of " << counter + 1 << " item : ";
    cin >> itemId[counter];

    cout << "Enter the price of " << counter + 1 << " item : ";
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice()
{
    int id;
    cout << "Enter the Id of the item to see its price : ";
    cin >> id;

    for (int i = 0; i < counter; i++)
    {
        if (itemId[i] == id)
        {
            cout << "The price of item with id " << itemId[i] << " is " << itemprice[i] << endl;
            return;
        }
    }
    cout << "Item not found !" << endl;
}

void shop ::displayallprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop lalit;
    lalit.initcounter();
    int c;
    char menu,again;

    do
    {
        cout << "What do you want do." << endl;
        cout << "1. Set price for an item." << endl;
        cout << "2. Display price of a specific item." << endl;
        cout << "3. Display price of all items." << endl;
        cout << "Enter your choice : ";
        cin >> c;

        switch (c)
        {
        case 1:
            do
            {

                lalit.setprice();
                cout << "Want to set another one? (Y/y) : ";
                cin >> again;
            }while(again == 'Y'||again == 'y');
            break;
            
            case 2:
            
            do
            {
                
                lalit.displayprice();
                cout << "Want to display another one? (Y/y) : ";
                cin >> again;
            }while(again == 'Y'||again == 'y');
            break;

        case 3:
            lalit.displayallprice();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        
        cout << "Want to do something else? (Y/y) : ";
        cin >> menu;

    } while (menu == 'y' || menu == 'Y');

    return 0;
}



///////////////////  Static value and static function  /////////////////////
#include <iostream>
using namespace std;


class employee
{
    int id;
    static int count;

public:

    static void getcount();
    void setdata()
    {
        cout << "Enter the id of employee : ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The id is "<<id<<" and the number of employee is "<<count<<endl;
    }
};

void employee :: getcount()
{
    // cout << id;  //static function can only use static value
    cout << "The value of count is "<<count<<endl;

}
int employee :: count;

int main ()
{
    employee vishu,sparsh,manik;
    vishu.setdata();
    vishu.getdata();
    employee :: getcount();
    
    sparsh.setdata();
    sparsh.getdata();
    employee :: getcount();
    
    manik.setdata();
    manik.getdata();
    employee :: getcount();
    
    return 0;
}



///////////////////// Array of objects ////////////////////

#include <iostream>
using namespace std;

class employee
{
    // Bydefault everything is private.
    int id;
    int salary;

public:
    string name, department;
    float exp;

    void setdata();
    void getdata();
};

void employee ::setdata()
{

    cout << "Enter the Id of the employee : ";
    cin >> id;

    cout << "Enter the name of the employee : ";
    cin >> name;

    cout << "Enter the department of the employee : ";
    cin >> department;

    cout << "Enter the experience of the employee : ";
    cin >> exp;

    cout << "Enter the salary of the employee : ";
    cin >> salary;
}

void employee :: getdata()
{
    cout << "The Id of this employee is "<<id<< endl;
    cout << "The name of this employee is "<<name<< endl;
    cout << "The department of this employee is "<<department<< endl;
    cout << "The experience of this employee is "<<exp<< endl;
    cout << "The salary of this employee is "<<salary<< endl;
}
int main()
{
    int id;
    employee yub[5];

    for (int  i = 0; i < 5; i++)
    {
        yub[i].setdata();
        yub[i].getdata();
    }    

    return 0;
}




//////////////////////  Passing objects as function argument /////////////////////
#include <iostream>
using namespace std;


class comp
{
    int a;
    int b;

public:
    void setdata(int a1 ,int b1)
    {
        a = a1;
        b = b1;
    }

    void addcom (comp o1, comp o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void display ()
    {
        cout << "The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main ()
{

    comp c1,c2,c3;

    c1.setdata(2,3);
    c1.display();

    c2.setdata(4,5);
    c2.display();
    
    c3.addcom(c1,c2);
    c3.display();

    return 0;
}