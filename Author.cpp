#include<iostream>
#include "Author.h"

using namespace std;

Author::Author(){
	authorId = 0;
			authorName="";
			bookName="";
			totalBook = 0;
			totalSoldBook = 0;
}

Author::Author(int authorId,string authorName,string bookName,int totalBook,int totalSoldBook){
			this->authorId = authorId;
			this->authorName = authorName;
			this->bookName = bookName;
			this->totalBook = totalBook;
			this->totalSoldBook = totalSoldBook;
}

void Author::availableCopies() {
	cout << "Available Copies: " << this->totalBook - this->totalSoldBook << endl;
}
