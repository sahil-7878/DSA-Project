
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class DMA
{
public:
    Node *head;
    int count;

    DMA()
    {
        this->head = NULL;
        this->count = 0;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }

    void searchNode(int data)
    {
        Node *ptr = this->head;
        int index = 0;
        bool found = false;

        if (ptr == NULL)
        {
            cout << "The list is empty" << endl
                 << endl;
        }
        while (ptr != NULL)
        {
            if (ptr->data == data)
            {
                cout << "Data Found! at index: " << index << " data is: "
                     << ptr->data << endl
                     << endl;
                found = true;
                break;
            }
            ptr = ptr->next;
            index++;
        }
        if (!found)
        {
            cout << "Data not exists in the list." << endl
                 << endl;
        }
    }

    void deleteAtBeginning()
    {
        Node *temp = this->head;
        this->head = this->head->next;
        delete temp;
        temp = NULL;
        this->count--;
    }

    void deleteAtEnding()
    {
        if (this->head->next == NULL)
        {
            delete head;
            head = NULL;
            this->count--;
            return;
        }

        Node *ptr = this->head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete ptr->next->next;
        ptr->next = NULL;
        this->count--;
    }

    void deleteAtPosition(int position)
    {
        if (position == 0)
        {
            deleteAtBeginning();
            return;
        }

        Node *prev = this->head;
        Node *current = this->head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }

        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }

        prev->next = current->next;
        delete current;
        current = NULL;
        prev = NULL;
        delete prev;
        this->count--;
    }

    void deleteFromData(int data)
    {
        Node *ptr = this->head;
        Node *prev = NULL;
        if (ptr == NULL)
        {
            cout << "The list is empty" << endl
                 << endl;
            return;
        }
        if (ptr->data == data)
        {
            this->head = ptr->next;
            delete ptr;
            ptr == NULL;
            this->count--;
            return;
        }
        while (ptr != NULL && ptr->data != data)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            cout << "Data not exists in the list." << endl
                 << endl;
        }
        prev->next = ptr->next;
        delete ptr;
        this->count--;
    }

    void reverseNode()
    {
        Node *ptr = this->head;

        int *arr = new int[count];
        ptr = this->head;
        for (int i = 0; i < count; i++)
        {
            arr[i] = ptr->data;
            ptr = ptr->next;
        }
        for (int i = count-1; i >= 0; i--)
        {
            cout << arr[i] << " | ";
        }
        cout << endl << endl;

        delete[] arr;
    }

    void fetchNode()
    {
        Node *ptr = this->head;
        if (ptr == NULL)
        {
            cout << "The list is empty";
        }
        else
        {
            while (ptr != NULL)
            {
                cout << ptr->data << " | ";
                ptr = ptr->next;
            }
            cout << endl
                 << endl;
        }
    }

    void size(){
        cout << "The size of the list: " << this->count << endl << endl;
    }
};

void mainMenu()
{
    cout << "1. Insert the value at the beginning of the list" << endl
         << "2. Search the data from the list using its the value" << endl
         << "3. Delete the value from the beginning of the list" << endl
         << "4. Delete the value from the ending of the list" << endl
         << "5. Delete the value from any position of the list" << endl
         << "6. Delete the data from the list using its the value" << endl
         << "7. Reverse the list" << endl
         << "8. fetch all data" << endl
         << "9. size of the list" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

int main()
{

    DMA list;
    int choice, data, position;

    while (choice != 0)
    {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the data: ";
            cin >> data;
            list.insertAtBeginning(data);
            cout << "Node added successfully" << endl
                 << endl;
            break;
        case 2:
            cout << "Enter the data: ";
            cin >> data;
            list.searchNode(data);
            break;
        case 3:
            list.deleteAtBeginning();
            cout << "Node deleted successfully" << endl
                 << endl;
            break;
        case 4:
            list.deleteAtEnding();
            cout << "Node deleted successfully" << endl
                 << endl;
            break;
        case 5:
            cout << "Enter the position: ";
            cin >> position;
            list.deleteAtPosition(position);
            cout << "Node deleted successfully" << endl
                 << endl;
            break;
        case 6:
            cout << "Enter the data: ";
            cin >> data;
            list.deleteFromData(data);
            cout << "Node deleted successfully" << endl
                 << endl;
            break;
        case 7:
            list.reverseNode();
            break;
        case 8:
            list.fetchNode();
            break;
        case 9:
            list.size();
            break;
        case 0:
            cout << "Exiting succesfully.";
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    }

    return 0;
}
    