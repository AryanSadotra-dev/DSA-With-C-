//2: Find the factorial of a number n using a while loop and do a while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input no:";
    cin>>n;
    int i = 1;
    int fact = 1;
    while(i<=n)
    {
        fact = fact * i;
        i++;
    }
        cout<<"Factorial for "<< n << " is :"<< fact<< endl;        
    
    return 0;
}
