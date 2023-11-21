#include <iostream>

int reversedNum(int number){
    int num=0;
    int digit;
    while(0<number){
        digit = number % 10;
        num = num * 10 + digit;
        number = number/10;
    }
    return num;
}

int main(){
    int largestPalindrome=0;
    for(int i=100; i<=999;i++){
        for(int j=999; j>=100; j--){
            if((i*j==reversedNum(i*j) ) && (i*j > largestPalindrome)){
                largestPalindrome=i*j;
            }
        }
    }
    std::cout<<"Largest Palindrome made from the product of 3-digit numbers is "<<largestPalindrome<<std::endl;

    return 0;
}
