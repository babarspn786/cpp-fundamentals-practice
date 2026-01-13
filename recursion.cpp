// #include <iostream>
// using namespace std;


// //febonacci using recursion!!
// int fib(int n){
//     if(n<2){
//         return 1;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }

// int fibi(int n){
//     if (n==0)return 0;
//     if (n==1)return 1;

//     int prev1 = 1;
//     int prev2 = 0;
//     int cur;

//     for (int i = 2 ; i<=n ;i++){

//         cur = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = cur;
//     }
//     return cur;
// }

// // factorial using iteration!!
// int fact(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }

// int main (){

//     int num,f,fi;
//     char c;

//     // do{
//     // cout << "Enter your number : ";
//     // cin >> num;

//     // f = fact(num);
//     // cout << "The factorial of "<<num<<" is "<<f;


//     // fi = fib(num);

//     // cout << "The number at "<<num<<" position is "<<fi<<endl;

//     // cout << "Want to check more ? (Y/y): ";
//     // cin >> c;
//     // }while(c == 'Y' || c== 'y');


//     do
//     {   
//         cout << "Enter your number : ";
//         cin >> num;

//         int f2 = fibi(num);

//         cout << "The value at position "<<num<<" is "<<f2<<endl;

//         cout << "Want to check more (Y/y): ";
//         cin >> c;


//     } while (c == 'y' || c=='Y');
    
//     return 0;
// }