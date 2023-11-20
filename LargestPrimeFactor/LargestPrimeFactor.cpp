#include <iostream>

long long largestPrimeFactor(long long number){
    long long i=2;
    while(i*i < number){
        if(number%i){
            i++;
        }
        else{
            number = number/i;
        }
    }
    return number;
}

int main(){
    long long theNumber = 600851475143;
    std::cout<<"the largest prime factor of "<<theNumber<<" is "<<largestPrimeFactor(theNumber)<<std::endl;

    return 0;
}