//Tarang - 23070123140 
#include <iostream>
using namespace std;

int main(){
    int temp[3][3],i,j,k,l;
    for (i =0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<"Enter element - ("<<i<<j<<"): ";
            cin>>temp[i][j];
            
        }
    }
    for(k=0;k<3;k++) {
        for(l=0;l<3;l++) {
            cout<<temp[k][l];
            cout<<"  ";
        }
        cout<<endl;
    }
    int r1, c1, r2, c2;
    int ar[r1][c1], t[r2][c2];
    cout<<"Enter number of rows & column: ";
    cin>>r1>>c1;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Enter element-"<<i+1<<j+1<<":";
            cin>>ar[i][j];
        }
    }
    r2=c1;
    c2=r1;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            t[i][j]=ar[j][i];
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
}
