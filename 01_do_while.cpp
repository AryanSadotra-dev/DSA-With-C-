#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input n: ";
    cin>>n;
    int i= 1;
    do{
        if(i %2 ==0){
            cout<<"Even no: "<< i << endl;
        }
        i++;
    }while(i<=n);
    return 0;

}