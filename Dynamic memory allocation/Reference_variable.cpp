#include<iostream>
using namespace std;

void increment(int& k)
{
    k++;
}
int main()
{
    int i=10;
    int& j=i;
    j++;
    cout<<i<<endl; //changes will reflect 
    int k=50;
    j = 50;
    cout<<i<<endl; // i will become 50
    // But what is the use of Reference variable
    increment(i);
    cout<<i<<endl;
    cout<<"hare krishna"<<endl;
}
