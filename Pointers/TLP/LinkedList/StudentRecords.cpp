#include <iostream>
using namespace std;

// Define the structure for linked list nodes
struct listNode {
    int studentNum;
    int grade;
    listNode* next;
};

// Typedef for better readability
typedef listNode* studentCollection;

int main() {
    studentCollection sc;

    // Creating three nodes dynamically
    listNode* node1 = new listNode;
    node1->studentNum = 1001;
    node1->grade = 78;

    listNode* node2 = new listNode;
    node2->studentNum = 1012;
    node2->grade = 93;

    listNode* node3 = new listNode;
    node3->studentNum = 1076;
    node3->grade = 85;  // ✅ Fixed incorrect variable name

    // Linking nodes together
    sc = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Traversing and displaying the list
    listNode* temp = sc;
    while (temp != NULL) {
        cout << "Student Number: " << temp->studentNum << ", Grade: " << temp->grade << endl;
        temp = temp->next;
    }

    // Properly deleting allocated memory
    while (sc != NULL) {
        listNode* temp = sc;
        sc = sc->next;
        delete temp;
    }

    return 0;
}
