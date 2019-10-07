#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> dot;
    queue <int> num;

    int dots = 0;
    int nums = -1;

    bool pass = true;
    int test;
    cin>>test;

    for(int i = 0 ; i < test; i++)
    {
        char ch;
        string str;
        getline(cin,str);
        for(int i =0 ; i < str.length(); i++)
        {
            if(str[i] == '.')
                dots++;
            else
            {
                switch(str[i])
                {
                case '0':
                    nums = 0;
                    break;
                case '1':
                    nums = 1;
                    break;
                case '2':
                    nums = 2;
                    break;
                case '3':
                    nums = 3;
                    break;
                case '4':
                    nums = 4;
                    break;
                case '5':
                    nums = 5;
                    break;
                case '6':
                    nums = 6;
                    break;
                case '7':
                    nums = 7;
                    break;
                case '8':
                    nums = 8;
                    break;
                case '9':
                    nums = 9;
                    break;
                default:
                    break;
                }

                if(num.empty())
                {
                    dots = 0;
                    num.push(nums);
                }
                else
                {
                    if(nums + num.front() > dots)
                    {
                        pass = false;
                        break;
                    }
                    else
                    {
                        cout<<num.front()<<nums;
                        dots = 0;
                        num.pop();
                        num.push(nums);
                    }
                }
            }
        }



        if(pass)
            cout<<"safe"<<"\n";
        else
            cout<<"unsafe"<<"\n";

    }
    return 0;
}