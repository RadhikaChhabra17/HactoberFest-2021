// to find prime numbers upto given number
#include<iostream>
using namespace std;

void prime(int given){
    int prime[given+1] = {0};
    for(int i=2;i<=given;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=given;j += i){
                prime[j] = 1; //assigning non prime numbers as 1
            }
        }
    }
    for(int i=2;i<=given;i++){
        if(prime[i]==0){
            cout<<i<<" "; //print prime numbers
        }
    }
}

int main(){
    int n;
    cin>>n; //input the number 
    prime(n); // function to print prime numbers
    return 0;
}