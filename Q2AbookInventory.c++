// a)	A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies are available, the total cost of the requested copies is displayed; otherwise, the message “Required copies not in stock” is displayed.
// Design a system using a class ‘books’ with suitable member functions and constructors. Use ‘new’ operator in constructors to allocate memory space required.

#include <iostream>
#include <cstring>
using namespace std;

class books {
private:
    char *author;
    char *title;
    char *publisher;
    float price;
    int stock;

public:
    // Constructor to allocate memory and initialize the book details
    books(const char *auth, const char *titl, const char *pub, float pr, int stk) {
        author = new char[strlen(auth) + 1];
        title = new char[strlen(titl) + 1];
        publisher = new char[strlen(pub) + 1];

        strcpy(author, auth);
        strcpy(title, titl);
        strcpy(publisher, pub);

        price = pr;
        stock = stk;
    }

    // Destructor to free allocated memory
    ~books() {
        delete[] author;
        delete[] title;
        delete[] publisher;
    }

    // Function to display book details
    void display() const {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nPublisher: " << publisher << "\nPrice: $" << price
             << "\nStock: " << stock << endl;
    }

    // Function to search for a book by title and author
    bool search(const char *searchTitle, const char *searchAuthor) const {
        return strcmp(title, searchTitle) == 0 && strcmp(author, searchAuthor) == 0;
    }

    // Function to check if requested copies are available and calculate the cost
    void checkAvailability(int copies) {
        if (copies <= stock) {
            float totalCost = price * copies;
            cout << "Total cost for " << copies << " copies: $" << totalCost << endl;
            stock -= copies;  // Update stock
        } else {
            cout << "Required copies not in stock." << endl;
        }
    }
};

int main() {
    cout << "Abhishek Singh (2315272)\n";
    // Create some book objects
    books book1("Author A", "Title A", "Publisher A", 50.0, 10);
    books book2("Author B", "Title B", "Publisher B", 30.0, 5);

    // Get input from the user for the book they want
    char searchTitle[50], searchAuthor[50];
    cout << "Enter book title: ";
    cin.getline(searchTitle, 50);
    cout << "Enter book author: ";
    cin.getline(searchAuthor, 50);

    // Search for the book in the inventory
    bool found = false;
    books *inventory[] = {&book1, &book2};  // Array of books in the shop

    for (int i = 0; i < 2; i++) {
        if (inventory[i]->search(searchTitle, searchAuthor)) {
            found = true;
            inventory[i]->display();

            // Ask for the number of copies required
            int copies;
            cout << "Enter the number of copies required: ";
            cin >> copies;

            // Check availability and calculate total cost
            inventory[i]->checkAvailability(copies);
            break;
        }
    }

    if (!found) {
        cout << "Book not available." << endl;
    }

    return 0;
}
