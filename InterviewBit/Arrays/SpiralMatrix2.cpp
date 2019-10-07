vector<vector<int> > Solution::generateMatrix(int A) {
   /*  their solution
    int dir = 0;
    vector< vector<int> > matrix(n, vector<int> (n, 0));
    int i = 0, j = 0, k = 1;
    while (k <= n * n) {
        matrix[i][j] = k++;
        if (dir == 0){
            j++;
            if (j == n || matrix[i][j] != 0) dir = 1, j--, i++;
        } else
        if (dir == 1) {
            i++;
            if (i == n || matrix[i][j] != 0) dir = 2, i--, j--;
        } else
        if (dir == 2) {
            j--;
            if (j < 0 || matrix[i][j] != 0) dir = 3, j++, i--;
        } else
        if (dir == 3) {
            i--;
            if (i < 0 || matrix[i][j] != 0) dir = 0, i++, j++;
        }
    }
    */
    return matrix;
    int n = A*A;
    int l=0,r=A-1,u=1,d=A-1;
    int a=0,b=0;
    vector<vector <int>> v(A);
    for (int i =0;i<A;i++)
    {
        v[i] = vector<int>(A); 
    }
    int num=1;
    while(n>0)
    {
        //right
        for(int j=b;j<=r;j++)
        {
            v[a][j] = num;
            b=j;
            num+=1;
            n--;
            if(num==(A*A)+1)
            {
                return v;
            }
        }
        a+=1;
        
        //down
        for(int i=a;i<=d;i++)
        {
            v[i][b] = num;
            num+=1;
            a=i;
            n--;
            if(num==(A*A)+1)
            {
                return v;
            }
        }
        b-=1;
        
        //left
        for(int j=b;j>=l;j--)
        {
            v[a][j] = num;
            num+=1;
            n--;
            b=j;
            if(num==(A*A)+1)
            {
                return v;
            }
        }
        a-=1;
        
        //up
        for(int i=a;i>=u;i--)
        {
            v[i][b] = num;
            num+=1;
            a=i;
            n--;
            if(num==(A*A)+1)
            {
                
                return v;
            }
        }
        b+=1;
        
        l+=1;
        r-=1;
        u+=1;
        d-=1;
        
    }
    
    return v;
    
}
