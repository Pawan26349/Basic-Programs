#include<iostream>
using namespace std;
int main()
{
    char word[1];
    char arr[10]={'a','e','i','o','u','A','E','I','O','U'};
    cout<<"Enter the word to check : ";
    cin>>word;
    int flag=0;
    for(int i=0;i<10;i++)
    {
        if(word[0]==arr[i])
        {
            flag++;
        }
    }
    if(flag>0)
    {
        cout<<"The word is vowel . \n";
    }
    else if(flag==0)
    {
        cout<<"The word is consonant .\n";
    }
    else 
    {
        return main();
    }
    return main();

}