#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Book {
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* title, const char* isbn, int value)
		:price(value)
	{
		this->title = new char[strlen(title) + 1]; //안에있는 변수 가리킴=new char
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	
	void ShowBookInfo() {
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}

	~Book() {
		delete[]title;
		delete[]isbn;
	}
};
//Ebook is a book
//Book의 종류

class Ebook : public Book {
private:
	char* DRMKey;
public:
	Ebook(const char*title, const char*isbn, int value, const char*key)
		:Book(title, isbn, value) {
		DRMKey = new char[strlen(key) + 1];
		strcpy(DRMKey, key);
	}

	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}

	~Ebook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;

	Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kkdfs");
	ebook.ShowEBookInfo();

	return 0;
}