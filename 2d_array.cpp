#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int A[2][2];

    cout<<"Enter the Number of Elements: "<<endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<2; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin>>A [row][col];
        }
    }

    for(int row = 0; row<2; row++)
    {
        for(int col= 0; col<2; col++)
        {
            cout<<A [row][col] <<" ";
        }
        cout<<endl;
    }
    getch();
}
