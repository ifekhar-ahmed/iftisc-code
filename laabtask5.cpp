#include<iostream>
using namespace std;

int main(){

    int countt=1;
    bool flag = false;

    int arr[10], arr2[10];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    arr2[0] = arr[0];

    for(int i=1; i<10; i++){

        bool repeat = false;
        for(int j=0; j<10; j++){
            if(arr[i] == arr2[j]){
                repeat = true;
                break;
            }
        }

        if(!repeat){
            arr2[countt] = arr[i];
            countt++;
        }
    }

    for(int i=0; i<countt; i++){
        int add= 0;
       for(int j=0; j<10; j++){
           if(arr2[i] == arr[j]){
                add++;
            }
        }
        cout<<arr2[i]<<" occurs = "<<add<<" times"<<endl;
    }


    return 0;
}
