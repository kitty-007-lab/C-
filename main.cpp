#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float jmd,usd,p,pound;
    string c;
    int v;

cout<<"enter currency:"<<endl;
getline(cin,c);

if(c == "JMD"|| c== "jmd"){
    cout<<"Enter the value: JMD to USD"<<endl;
    cin>>v;
    cout<<"JMD to USD: "<<jmd*0.0069;
    

}else {
    cout<<"Enter the value: Pound to USD"<<endl;
    cin>>v;
    cout<<"pound to USD: "<<pound*1.22;
}

}


