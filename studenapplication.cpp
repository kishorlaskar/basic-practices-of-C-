#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum = 0;
    cout<<"Enter the Number of Students : ";
    cin>>n;

    int students[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Marks for Student number"<<" "<<i+1<<" = ";
        cin>>students[i];
        sum = sum + students[i];
    }
    cout<<"Total Marks:"<<sum<<endl;

    float avg = (float) sum /n;
    cout<<"Avarag is : "<<avg<<endl;

    int max = students [0];
    int min = students [0];

  for( int i=1; i<n; i++)
    {
        if( max < students[i])
        {
            max = students[i];
        }
        if(min > students[i])
        {
            min = students[i];
        }

    }
    cout<<"Maximum number is: "<<max<<endl;
        cout<<"Minimum number is: "<<min<<endl;

    getch();

}




