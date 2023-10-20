#include<iostream>
using namespace std;

class Author {
	private:
		int authorId;
		string authorName;
		string bookName;
		int totalBook;
		int totalSoldBook;
	public:
		Author();
		Author(int authorId,string authorName,string bookName,int totalBook,int totalSoldBook);
		void availableCopies();
		
};
