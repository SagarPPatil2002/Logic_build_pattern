#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern1 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
 
 void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
 }

 void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0; j<n-i+1;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
 }

 void pattern4(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
 }

 void pattern5(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << i ;
        }
        cout << endl;
    }
 }

 void pattern6(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
 }

 void pattern7(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout << num<< " ";
            num=num+1;
        }
        cout << endl;
    }
 }


 void pattern8(int n){
    
    for(int i=0;i<=n;i++)
    {
       char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout << ch;
            ch=ch+1;
        }
        cout <<endl;
    }
 }

 void pattern9(int n){
    for(int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch=ch+1;
            

        }
        cout << endl;
    }

 }
 int main(){
    int n;
    cin>>n;
    pattern9(n);
 }