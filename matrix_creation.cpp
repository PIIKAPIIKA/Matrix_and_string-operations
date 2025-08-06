#include <iostream>
using namespace std;
int main() {
    int r,c,i,j;
    cout<<"enter dimension of matrix"<<" rows,"<<"coloumn:";
    cin>>r>>c;
    int mat[r][c];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"enter term["<<i+1<<j+1<<"]";
            cin>>mat[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}
// output //
//enter dimension of matrix rows,coloumn:3,3//
//enter term[11]4//
//enter term[12]5//
//enter term[13]6//
//enter term[21]1//
//enter term[22]2//
//enter term[23]3//
//enter term[31]7//
//enter term[32]8//
//enter term[33]9//
//4 5 6 //
//1 2 3 //
//7 8 9 //