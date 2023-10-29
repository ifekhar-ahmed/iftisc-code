#include <iostream>
using namespace std;
int main (){
int size1, size2;
cout<< " enter the first array:";
cin>> size1;

cout<< " enter the second array:";
cin>> size2;

int arr1[size1];
 int arr2[size2];

  cout << "enter "<< size1<< "value of first array :";
  for(int i=0; i<size1; i++){

    cin>> arr1[i];
  }
cout << "enter "<< size2<< "value of second array :";
  for(int i=0; i<size2; i++){

    cin>> arr2[i];

}
int newsize =size1+size2;
int mergearry[newsize];
int in=0;

for(int i=0; i<size1; i++){
    mergearry[in]=arr1[i];
    in++;

  for(int i=0; i<size2; i++){
    mergearry[in]=arr2[i];
    in++;



}
cout<<"merge array in reverse order :";
for(int i=newsize-1; i>=0; i--){
    cout<< mergearry [i]<<"  ";
}
}
}
