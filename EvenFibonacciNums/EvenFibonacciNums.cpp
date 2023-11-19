#include <iostream>
int a = 0; int b = 1;
int temp = 0;
int limit = 4000000;
int sum=0;
int main(){
    while(b<=limit){
        if(b%2==0){
            sum+=b;
        }
        temp = a;
        a = b;
        b = temp +b;
    }
    std::cout<<"the sum of the even-valued numbers of fibonacci: "<<sum<<std::endl;
    return 0;
}