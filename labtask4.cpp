 #include<iostream>
using namespace std;

int main(){

    int arr[10],x, countt=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<" search input a number to: ";
    cin>>x;

    for(int i=0; i<10; i++){
        if(arr[i]==x){
            countt++;
        }
    }

    cout<<"the number occurs "<<countt<<" times in the array"<<endl;


    return 0;
}
