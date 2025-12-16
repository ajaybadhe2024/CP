#include<iostream>
using namespace std;
int main(){
     int people;
     cin>>people;
     bool hard=false;
     for(int i=0;i<people;i++){
        int n;
        cin>>n;
        if(n==1){
            hard=true;
            break;// no need to check again here i want to stop
        }
     }
     
        if(hard){
            cout<<"HARD"<<endl;
          
        }else{
            cout<<"EASY"<<endl;
        }
    
return 0;
}   


