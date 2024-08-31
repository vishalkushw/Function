 /*Create a class named Library to manage a library catalog,
 Data Member:  book_id, author_name, and category.
 One static data member : book_count
 Methods: display() 
 One static member function : total_books()??
 display total objects been created.
 */
#include <iostream>
using namespace std;

class Library {
private:
    int book_id;
    string author_name;
    string category;
    static int book_count;

public:
    Library(int id,string author,string cat) {
	
        book_id=id; 
		author_name=author; 
		category=cat ;
        book_count++; 
    }

    void display() const {
        cout<<"Book ID: "<< book_id<<endl;
        cout<<"Author Name: "<< author_name<<endl;
        cout<<"Category: "<< category<<endl;
    }

    static void total_books() {
        cout << "Total number of books: " << book_count <<endl;
    }
};

int Library::book_count = 0;

int main() {
    Library book1(101, "Vishal", "java");
    Library book2(102, "Ram", "c++");
    Library book3(103, "Pawan", "jscript");

    book1.display();
    book2.display();
    book3.display();
    Library::total_books();

}
