// To find the maximum of the heights that can be made with minimum heights 

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n,k;
    cin >> n >> k;

    long long min_of_max_heightpossible = 0;

    if (k%n == 0){
        min_of_max_heightpossible = k/n;
    }
    else{
        min_of_max_heightpossible = (k/n)+1;
    }

    cout << min_of_max_heightpossible;


    return 0;
}
