#include <iostream>
using namespace std;

class TableofContents{
	private:
		list<string>items;
		
		public:
			TableofContents(){
				cout<<"Table of Content is shown\n";
			}
			void addItem(string item){
				item.puch_back(item);
			}
};
class Book{
	public:
		TabelofContents toc;
		list<string>sections;
		list<string>chapter;
		Book(){
			toc=TableofContents();
		}
};
int main(){
	Book book1=Book();
	getchar();
	
}
