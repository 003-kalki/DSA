/*
   Design your own: Take a problem that you already know how to solve using
   an array but that is limited by the size of the array. Rewrite the code to remove
   that limitation using a dynamically allocated array.
*/
/*
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;  // Fixed-size array limitation

int main() {
    int grades[MAX_SIZE];  // Static array with fixed size
    int count = 0;

    cout << "Enter grades (max " << MAX_SIZE << " students): ";
    for (int i = 0; i < MAX_SIZE; i++) {
        cin >> grades[i];
        count++;
    }

    cout << "Grades entered: ";
    for (int i = 0; i < count; i++) {
        cout << grades[i] << " ";
    }

    return 0;
}

 */
 #include <iostream>
 using namespace std;
      
      struct resultNode{
      int grade;
      resultNode*next;
      };
      
  int main( ){
       
       resultNode* head = NULL; // Head of the linked list
       resultNode* tail = NULL; 

        int n;
        cout<<"How many grades thry have to enter ?";
        cin>>n;

        for(int i=0;i<n;i++){
            int grade;
            cout<<"Enter the grade for student"<<i+1<<":";
            cin>>grade;

            resultNode * newNode = new resultNode;
            newNode->grade =grade;
            newNode->next =NULL;

            if(head ==NULL){
                head = newNode;
                tail= newNode;
            }else {
                tail->next =newNode;
                tail = newNode;
            }
        }
         // printing the grades:
         cout<<"\nGrades enetered:";
         resultNode*temp = head;
         while(temp !=NULL){
            cout<<temp->grade<<" ";
            temp =temp->next;
         }
         cout <<endl;

         //freeing the allocated memory 
         temp =head;
         while (temp !=NULL){
            resultNode*toDelete = temp;
            temp =temp-> next;
            delete toDelete;
         }
         return 0;
   }
