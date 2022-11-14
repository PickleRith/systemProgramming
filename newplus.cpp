#include<iostream>
using namespace std;

class Cal{
private:
	int x, y;
public:	
Cal(){
	int x = 5;
	int y = 5;
}
int add(int,int);

};

int Cal::add(int,int){
return x+y;
}

int main(){
	Cal obj;
	cout<<"add is"<<obj.add(4,6)<<endl;
	
	return 0;
	}
