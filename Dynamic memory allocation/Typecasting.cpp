// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n=65;
// 	int *p=&n;
// 	char *pc=(char*)p;
// 	cout<<*p<<endl;
// 	cout<<*pc<<endl;  //Little endian and big endian system 
// 	// cout<<*(pc+1)<<endl;
// 	// cout<<*(pc+2)<<endl;
// 	// cout<<*(pc+3)<<endl;

	
// }
#include <iostream>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;
}