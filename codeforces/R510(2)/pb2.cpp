

// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<map>
// #include<string>
// using namespace std;

// typedef long long int ll;

// int main()
// {
//     int n, mina = 9999999, minb = 9999999, minc = 9999999, minab = 9999999, minbc = 9999999, minca = 9999999, minabc = 9999999;
//     cin>>n;
//     string vit;
//     int cost;
//     for(int i = 0; i < n; i++)
//     {
//         cin>>cost;
//         cin>>vit;
//         if(vit == "A")
//             mina = min(mina, cost);
//         else if(vit == "B")
//             minb = min(minb, cost);
//         else if(vit == "C")
//             minc = min(minc, cost);
//         else if(vit == "AB" || vit == "BA")
//             minab = min(minab, cost);
//         else if(vit == "AC" || vit == "CA")
//             minca = min(minca, cost);
//         else if(vit == "BC" || vit == "CB")
//             minbc = min(minbc, cost);
//         else
//             minabc = min(minabc, cost);
//     }
//     int minm = min(mina+minb+minc, min(minabc, min(mina+minbc, min(minb+minca, min(minc + minab, min(minab+minbc, min(minca+minab, minca+minbc)))))));
//     if(minm >= 9999999)
//         cout<<-1<<'\n';
//     else
//         cout<<minm<<'\n';
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;

    long long c[n][4];

    string v;
    int flag1,flag2,flag3,flag4,flag5,flag6,flag7;
    flag1 =0;
    flag2 =0;
    flag3 =0;
    flag4 =0;
    flag5 =0;
    flag6 =0;
    flag7 =0;

        long long mina,minb,minc,minab,minbc,minac,minabc;

        mina = -1;
        minb = -1;
        minc = -1;
        minbc = -1;
        minab = -1;
        minac = -1;
        minabc = -1;




    for(long long i = 0; i < n; i++)
    {
        cin >> c[i][0];
        cin >> v;
        

        if (v == "A"){
            c[i][1]==1;
            c[i][2]==0;
            c[i][3]==0;

            if(flag1 == 0){
                mina =  c[i][0];
            }
            
            if (c[i][0]<mina){
                mina = c[i][0];
            }
        flag1 = 1; 

        
        
        }
        else if (v=="B")
        {
            c[i][1]==0;
            c[i][2]==1;
            c[i][3]==0;

             if(flag2 == 0){
                minb =  c[i][0];
            }
            
            if (c[i][0]<minb){
                minb = c[i][0];
            }
        flag2 = 1; 

        }
         else if (v=="C")
        {
            c[i][1]==0;
            c[i][2]==0;
            c[i][3]==1;

             if(flag3 == 0){
                minc =  c[i][0];
            }
            
            if (c[i][0]<minc){
                minc = c[i][0];
            }
        flag3= 1; 

        }
         else if (v=="AB"||v=="BA")
        {
            c[i][1]==1;
            c[i][2]==1;
            c[i][3]==0;

             if(flag4 == 0){
                minab =  c[i][0];
            }
            
            if (c[i][0]<minab){
                minab = c[i][0];
            }
        flag4 = 1; 

        }  
        else if (v=="BC"||v=="CB")
        {
            c[i][1]==0;
            c[i][2]==1;
            c[i][3]==1;

             if(flag5 == 0){
                minbc =  c[i][0];
            }
            
            if (c[i][0]<minbc){
                minbc = c[i][0];
            }
        flag5 = 1; 

        }
        else if (v=="AC"||v=="CA")
        {
            c[i][1]==1;
            c[i][2]==0;
            c[i][3]==1;

             if(flag6 == 0){
                minac =  c[i][0];
            }
            
            if (c[i][0]<minac){
                minac = c[i][0];
            }
        flag6 = 1; 


        }else if (v=="ABC"||v=="ACB"||v=="BAC" ||v=="BCA" ||v=="CAB"||v=="CBA")
        {
            c[i][1]==1;
            c[i][2]==1;
            c[i][3]==1;

             if(flag7 == 0){
                minabc =  c[i][0];
            }
            
            if (c[i][0]<minabc){
                minabc = c[i][0];
            }
        flag7 = 1; 

        }

        
        
       


        
        
    }

     long long pos[8];
        if(mina != -1 && minb != -1 && minc != -1){
        pos[0] = mina+minb+minc;

        }
        else
        {
            pos[0] = -1;
        }
         if(mina != -1 && minbc != -1 ){
        pos[1] = mina+minbc;

        }
        else
        {
            pos[1] = -1;
        } if(minb != -1 && minac != -1){
        pos[2] = minb+minac;

        }
        else
        {
            pos[2] = -1;
        } if(minab != -1 && minc != -1){
        pos[3] = minab+minc;

        }
        else
        {
            pos[3] = -1;
        } if(minabc != -1 ){
        pos[4] = minabc;

        }
        else
        {
            pos[4] = -1;
        }
        if(minab != -1 && minbc != -1  ){
            pos[5] = minab+minbc;

        }
        else
        {
            pos[5] = -1;
        }
          if( minab != -1 && minac != -1   ){
            pos[6] = minab+minac;

        }
        else
        {
            pos[6] = -1;
        }
          if(minbc != -1 && minac != -1  ){
            pos[7] = minbc+minac;

        }
        else
        {
            pos[7] = -1;
        }
        
        
        
    
    long long ans=-1;

    int flag =0;
    
    for(int i = 0; i < 8; i++)
    {
        if (pos[i] !=-1){
        if (flag == 0){
            ans = pos[i];
        }
        flag =1;
        if(ans>pos[i]){
            ans = pos[i]; 
        }
        }
    }
    // cout << pos[0]<<endl;
    // cout << pos[1]<<endl;
    // cout << pos[2]<<endl;
    // cout << pos[3]<<endl;
    // cout << pos[4]<<endl;

    cout << ans;
    
            

    return 0;
}



