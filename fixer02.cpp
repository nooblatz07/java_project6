#include<iostream>
using namespace std;
void promtUser(bool flag)
{
if (flag == 1)
    cout<<" Input first integer: ";
else
    cout<<" Input second integer: ";
}
int getNum()
{
    int n;
    cin>>n;
    return n;
}
int getGCD (int num1 , int num2){
int GCD = 0;
 for(int i = 1; i <=num1 && i <=num2; i++){
        if(num1 % i == 0 && num2 % i == 0 ){
                    GCD = i;{
                    }
                }
            }
return GCD;
}

int getLCD (int num1 , int num2){
    bool isfound = false;
    int LCD = 0;
for(int i = 1; i <=num1 &&  i <=num2 ; i++){
   if(num1 % i == 0 && num2 % i ==0){
          LCD = i;
       if ( LCD != 1){
        isfound = true;
           break;
        }
      }
    }
   return LCD;
}
int getMAX (int num1 ,int num2){
if (num1 > num2)
    return num1;
else
    return num2;
}
int getMIN (int num1 ,int num2){
if (num1 < num2)
    return num1;
else
    return num2;
}
int getSUM(int num1,int num2){
return num1 + num2;
}
int main()
{
promtUser(1);
int num1 = getNum();
promtUser(0);
int num2 = getNum();
cout<< " GCD: "<< getGCD(num1,num2)<<endl;
cout<< " LCD: "<< getLCD(num1,num2)<<endl;
cout<< " MAX: "<< getMAX(num1,num2)<<endl;
cout<< " MIN: "<< getMIN(num1,num2)<<endl;
cout<< " SUM: "<< getSUM(num1,num2)<<endl;
}






