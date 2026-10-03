#include<iostream>
using namespace std;
int main()
{
    int book[5];
    int searchID;
    cout << "Enter 5 book IDs:\n";
    for (int i = 0; i < 5; i++)
        {
            cin >> book[i];
        }
    cout<< "\nEnter book idto search:";
    cin >> searchID;
    for (int i=0; i<5; i++)
        {
            if (book[i] == searchID)
            {
                cout << "Book Found";
                return 0;
            }
        }
    cout << "book Not Found";
    return 0;
}
        
