#include <iostream>
using namespace std;

class A{
	int a;
	public:
		A(int i){
			a=i;
		}
		void assign(int i){
			a=i;
		}
		int return_value(){
			return a;
		}
};
int main(){
	A obj(7);
	obj.assign(5);
	cout<<obj.return_value();
}
