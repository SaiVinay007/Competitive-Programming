#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++)
    {
        int a,b,remainder=0,reversed_number1=0,reversed_number2=0;
        cin >> a >> b;

        while ( a != 0 ){

            remainder = a%10;
            reversed_number1 = reversed_number1*10 +remainder;
            a /=10;  
            

        }

        while ( b != 0 ){

            remainder = b%10;
            reversed_number2 = reversed_number2*10 +remainder;
            b /=10;  
            

        }
        int reversed_number3=0;
        int sum = reversed_number1 + reversed_number2;

        while ( sum != 0 ){

            remainder = sum%10;
            reversed_number3 = reversed_number3*10 +remainder;
            sum /=10;  
            

        }

        cout << reversed_number3 <<endl;
    }
    
    


    return 0;
}