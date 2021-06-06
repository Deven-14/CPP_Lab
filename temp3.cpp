#include<iostream>
#include<math.h>
using namespace std;

class OCTAL{
    int oct[10],count;
    public:
  OCTAL(){
      oct[0]=0;
  }
    OCTAL(int x){
     int a[10],i=0,n; //convert int to oct
     while (x!=0)
     {
        a[i]=x%8;
         x=x/8;
         i++;
       
     }
    count=i;
    n=count-1; 
    for(int i=0;i<count;i++){
        oct[i]=a[n];
        n--;
    }         
    }


int operator+(int x);
friend ostream &operator<<(ostream &output , OCTAL &s);
};

int OCTAL ::operator+(int k){
        int j,x=0;
        j=count-1;
        for(int i=0;i<count;i++){
            x=x+oct[j]*pow(8,i);  //oct to decimal
            j--;
        }
        int sum=x+k;
        return sum;
}
ostream & operator<<(ostream &output,OCTAL &s)
{
    for(int i=0;i<s.count;i++)
          output<<s.oct[i];
        return(output);
}

int main(){
    int x,k,y=0;
    cout<<"Enter an interger: ";
    cin>>x;
    OCTAL h(x);
    cout<<"oct val: "<<h<<endl;
    cout<<"enter the integer to be added: ";
    cin>>k;
    y=x+k;
    cout<<"decimal addition: "<<y;
}
