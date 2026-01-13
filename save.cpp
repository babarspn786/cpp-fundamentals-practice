int main()
{
    // cout<<"Hello World"<<endl<<"Babar";

    // int a,b,c,d,e;
    // float f;
    // cout<<"Enter Your first number : ";
    // cin>>a;

    // cout<<"Enter your second number : ";
    // cin>>b;

    // c = a+b;
    // d = a-b;
    // e = a*b;
    // f = (float)a/b;

    // cout<<"The sum of "<<a<<" and "<<b<<" is "<<c<<endl;
    // cout<<"The sub of "<<a<<" and "<<b<<" is "<<d<<endl;
    // cout<<"The mult of "<<a<<" and "<<b<<" is "<<e<<endl;
    // cout<<"The dev of "<<a<<" and "<<b<<" is "<<f<<endl;

    return 0;
}

*lets understand dowhile and if,else

/*#include <iostream>
using namespace std;

int agecheck(int age)
{

    if (age >= 18 && age<=95)
    {
        cout << "You are Major :)"<<endl;
    }
    else if (age < 18 && age >= 5)
    {
        cout << "You are Minor :("<<endl;
    }
    else if (age < 5 && age >= 0)
    {
        cout << "Who the hell gave you the computer ?"<<endl;
    }
    else if (age < 0)
    {
        cout << "Buddy you are not born yet :)"<<endl;
    }
    else
    {
        cout << "How the hell are you still alive :O"<<endl;
    }
}

int main()
{
    int a;
    char c;

    do
    {
        cout<<"Enter your age :";
        cin>>a;
        agecheck(a);

        cout<<"Want to check more Y/y :";
        cin>>c;
    } while (c == 'Y' || c == 'y');
    



    return 0;
}*/



lets understad while loop
/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    

    int index = 0;

    while(index<36){
        cout<<"The index is "<<index<<endl;
        index = index + 1;
    }
}*/

Now for loop
/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    int i,n,b;
    cout<<"Enter your number : ";
    cin>>n;

    for (i=1;i<=10;i++){

        b = n*i;
        cout<<b<<endl;
    }
}*/

Right angle triangle

/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main (){
    int rows;
    cout<<"Enter the number rows : ";
    cin>>rows;


    for (int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/


Pyramid
/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    for (int i = 1;i<=n;i++){
        for (int j = 1; j<=n-i;j++){
            cout<<" ";
        }
        for (int k = 1;k <=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}*/



Box
/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i =1;i<=n;i++){
        for (int j =1 ;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/


left angle triangle
/*#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    for (int i = 1;i<=n;i++){
        for(int j = 1;j <= n-i;j++){
            cout<<" ";
        }
        for (int k = 1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    
    


string
// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     string name = "Babar";

//     cout<<"The name is "<<name<<endl;
//     cout<<"The name is "<<name.length()<<endl;
//     cout<<"The name is "<<name.substr(0,3)<<endl;
//     cout<<"The name is "<<name.substr(2,3)<<endl;

//     return 0;
// }