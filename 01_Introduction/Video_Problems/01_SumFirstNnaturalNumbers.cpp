#include<iostream>
using namespace std;

int sum_N_numbers(int n)
 {
    return int((n * (n+1))/2);
 }


int main()
{
    int n;
    std::cout<<"Enter nth number : "<<std::endl;
    std::cin>>n;
    if(n < 1)
        std::cout<<"Bad input"<<std::endl;
        return 0;
    cout<<"the sum of "<<n <<" natural numbers is : "<<sum_N_numbers(n)<<std::endl;
    return 0;
}