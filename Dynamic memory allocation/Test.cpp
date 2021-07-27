// #include <iostream>
// using namespace std;

// void func(int i, int& j, int p){
//     i++;
//     j++;
//     p++;
// }

// int main(){
//     int i = 10;
//     int j = 6;
//     int &p = i;
//     int k=p;
//     k++;
//     cout<<k<<endl;
//     func(i, j, p);
//     cout << i << " " << j << " " << p;//so consider p and i as same
// }
// #include <iostream>
// using namespace std;

// #define SQUARE(x) x*x

// int main(){
//     int x = 36;
//    cout<<x;
//     cout << x;

//     return 0;
// }
#include <iostream>
using namespace std;

int main(){
    const int p = 5;
    int const *q = &p;
    // cout<<*q<<endl;
    cout<<q<<endl;
    // (*q)++;
    cout<<q<<endl;
}