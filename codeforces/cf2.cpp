#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n,k=10,x=0;
    int a[100000];
    cin >> n;
    int i=0,num,l=10;

    while(n/k !=0){
        a[i] = n%k;
        n = n/k;
        k *= 10;
        i++;
    }

    int b[i];

    for (int j=0;j<i-1;j++){
        
        if(a[j]-a[j+1] ==1){
            if(a[j]==2){
                for(int c = 0;c<i;c++){
                    
                    
                    if(c == j){
                        num += 2*l;
                        l *= 10;
                        num += 1*l;
                        c += 2;
                    }else{
                        num += a[c]*l;
                    }

                    l *= 10;
                }
            }else if(a[j]==1){
                    for(int c = 0;c<i;c++){
                    
                    
                        if(c == j){
                            num += 1*l;
                            l *= 10;
                            num += 0*l;
                            c += 2;
                        }else{
                            num += a[c]*l;
                        }

                        l *= 10;
                    }
            }

            b[x] = num;
            x +=1;
          
        }
        else if(a[j]-a[j+1] ==-1){
             if(a[j]==1){
                 for(int c = 0;c<i;c++){
                    
                    
                        if(c == j){
                            num += 1*l;
                            l *= 10;
                            num += 2*l;
                            c += 2;
                        }else{
                            num += a[c]*l;
                        }

                        l *= 10;
                    }
                 

            }else if(a[j]==0){
                for(int c = 0;c<i;c++){
                    
                    
                        if(c == j){
                            num += 0*l;
                            l *= 10;
                            num += 1*l;
                            c += 2;
                        }else{
                            num += a[c]*l;
                        }

                        l *= 10;
                    }
            }
            b[x] = num;
            x +=1;
        }

    }

    return 0;
}
