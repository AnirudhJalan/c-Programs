#include<iostream>
#include <math.h>
using namespace std;
 

int main(){




float SI , CI;
float P,R,T;
cout<<"enter the value for P";
cin>>P;
cout<<"enter the value for R";
cin>>R;
cout<<"enter the value for T";
cin>>T;


SI=(P*R*T)/100;
cout<<"the simple interest is"; cout<<SI;

float x=(1+R/100);
float y=T;

CI= P*pow(x,y);
cout<<"\n the compound interest is"; cout<<CI;
return 0;




}