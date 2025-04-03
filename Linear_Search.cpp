#include<iostream>
using namespace std;
int main()
{   
    int key;
    cin>>key;
    int arr[8]={1,2,3,2,6,29,62,83};
    bool found=false;
    for(int i=0; i<8; i++)
    {
        if(key==arr[i])
        {
            cout<<" key in the array";
            found= true;
            break;
            
        }
       
    }
    if(!found)
    {
        cout<<"key is not present";
    }
    
}