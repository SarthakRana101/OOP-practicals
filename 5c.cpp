#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    void input()
    {
        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;
    int choice;

    do
    {
        cout << "\n===== BOOK MENU =====" << endl;
        cout << "1. Enter Book Details" << endl;
        cout << "2. Display Book Details" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                b.input();
                break;

            case 2:
                b.display();
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 3);

    return 0;
}