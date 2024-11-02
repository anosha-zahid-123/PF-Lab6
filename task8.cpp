#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows:";
    cin>>rows;
    int i=1;
    while(i<=rows)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}