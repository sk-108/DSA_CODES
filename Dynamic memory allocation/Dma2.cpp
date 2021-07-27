#include<bits/stdc++.h>
using namespace std;


int main(){

// while(true)
// {
//     int i=10;
// }
// while(true)
// {
//     int *p = new int;
// }
int *p = new int;
delete p; // address is delete not p
p = new int ;
delete p;
p = new int[40];
delete [] p;
return 0;
}