/*series is = 1-2+3-4+5-6......n even numbers get subtracted and odd numbers get added we have to find the total solution of series*/
#include <iostream>
using namespace std;
int main()
{
int u,c,p,s=0;
cout<<"Enter a Number = ";
cin>>u;
for(c=0;c<=u;c++){
    p=c%2;
   
    if(p==0){
        s=s-c;

    }
else{
    s=s+c;
}

}
cout<<"Answer Is = "<<s; 
return 0;
}