#include<iostream>
using namespace std;


 int main (){
int size1, size2;
cout<< " enter the size 1st element a";
cin>> size1;

cout<< " enter the size 2nd element b";
cin>> size2;

int a[size1];
 int b[size2];


 cout<< " enter "<< size1<<"values for first a :";
 for(int i=0; i<size1; i++){

    cin>>a[i];

 }
 cout<< " enter "<< size2<<"values for first b :";
 for(int i=0; i<size2; i++){

    cin>>b[i];
 }

 bool commonelement=false ;
 cout<< " common element between a and b :";

 for (int  i=0; i<size1 ; i++){
    for (int j=0; j<size2; j++){
        if (a[i]==b[j]){
            cout<<a [i]<< "  ";
            commonelement=true;
            break;
        }
    }
 }

 if (!commonelement){
    cout<< "no common element ";
 }
 cout<< endl;
 }
