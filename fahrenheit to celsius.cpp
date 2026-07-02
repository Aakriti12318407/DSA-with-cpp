#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int startF, endF, steps;

    cout<<"enter the starting fahrenheit value "<<endl;
    cin>>startF;
    cout<<"enter the neding fahrenheit value "<<endl;
    cin>>endF;
    cout<<"enter the steps"<<endl;
    cin>>steps;

    cout<<"\nFahrenheit to Celsius Table\n";
    cout<<"--------------------------\n";
    cout<<setw(15)<<"Fahrenheit"<<setw(15)<<"Celsius"<<endl;
    cout<<"--------------------------\n";
    for (int f = startF; f<=endF; f=f+steps){
        float c = (5.0/9)*(f-32);
        cout<<setw(15)<<f<<setw(15)<<fixed<<setprecision(2)<<c<<endl;
    }
    return 0;
}