#include <iostream>
using namespace std;

class B1{
	public:
		int i;
		int j;
		void g(int){}
};

class B2{
	public:
		int j;
		void g(){}
};
class D:public B1, public B2{
	public:
	int i;
	
};
int main(){
	D dobj;
	D *dptr=&dobj;
	dptr->i=5;
	//dptr->j=10;
	//dobj.g();
}
