#include <iostream> 

using namespace std; 

int main(){ 

	cout << "Hello world!" << endl;
	char a[100]; 
	bool IsBreak=false; 	
	cout << "Введите число" << endl; 
	cin >> a;
	for (int i=0; a[i]!='\0'; i++) 
	if (a[i]<48 || a[i]>57) { 
		cout << "Это не число!\n";  
		break; 
	} 

	cout << a << endl; 

	return 0; 
}