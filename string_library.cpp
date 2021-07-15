#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
     char name1[] = "Kishor";
   //  char name2[10];
     char name3[] = "Laskar";
     char name4[] = "KL";
     char word[] = "ABCD";

    int len = strlen(name1);//to identidy string length;
  //  strcpy(name2,name1);// copy string from one variable to another.
    strcat(name3,name4);//to concat two string with each other.
    strlwr(word);//string lower case converter
    cout<<word<<endl;
    strupr(word);//string uppercase converter
    cout<<word<<endl;
   int val = strcmp(name1,name3);

   if(val == 0)
   {
       cout<<"Equal"<<endl;
   }
   else
    {
        cout<<"Not Equal"<<endl;
    }
    cout<<len<<endl;
  //  cout<<name2<<endl;
    cout<<name3;


    getch();
}
