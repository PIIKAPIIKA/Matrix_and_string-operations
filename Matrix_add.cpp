#include <iostream>
using namespace std;
int main() {
    int r1,c1,r2,c2,i,j;
    cout<<"enter dimension of matrix 1"<<" rows,"<<"coloumn:";
    cin>>r1>>c1;
    cout<<"enter dimension of matrix 2"<<" rows,"<<"coloumn:";
    cin>>r2>>c2;
    int mat1[r1][c1];
    int mat2[r2][c2];
    int mat3[r2][c2];
  if(r1==r2 && c1==c2) 
  {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"enter term["<<i+1<<j+1<<"]";
            cin>>mat1[i][j];
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"enter term["<<i+1<<j+1<<"]";
            cin>>mat2[i][j];
        }
    }
    cout<<"marix 1 is"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"marix 2 is "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of both marix is"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
  }
  else
  {
      cout<<"Dimensions of matrix not same";
  }
    return 0;
}
// output //
/*enter dimension of matrix 1 rows,coloumn:3
3
enter dimension of matrix 2 rows,coloumn:3
3*/
/*enter term[11]1
enter term[12]2
enter term[13]3
enter term[21]1
enter term[22]2
enter term[23]3
enter term[31]1
enter term[32]2
enter term[33]3
enter term[11]1
enter term[12]2
enter term[13]3
enter term[21]1
enter term[22]2
enter term[23]3
enter term[31]1
enter term[32]2
enter term[33]3
marix 1 is
1 2 3 
1 2 3 
1 2 3 
marix 2 is 
1 2 3 
1 2 3 
1 2 3 
Sum of both marix is
2 4 6 
2 4 6 
2 4 6*/