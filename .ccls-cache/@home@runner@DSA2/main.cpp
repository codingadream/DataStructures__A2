#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cmath>
#include <stdexcept>


//#include "employee.h"
#include <cstddef>
#include "employee.cpp"
#include "Single_Linked_List.cpp"

using namespace std;



Single_Linked_List<int> listS;
 
int main(){
  for (int i = 1; i <= 10; i++) {
        listS.push_back(i);
    }
  
  int choice, item, index, position;
  
  Employee* emp;

  do {
          cout << "\n-----MENU-----" << endl;
          cout << "Please only enter in integers" << endl;
          cout << "1. Push front" << endl;
          cout << "2. Push back" << endl;
          cout << "3. Pop front" << endl;
          cout << "4. Pop back" << endl;
          cout << "5. Front" << endl;
          cout << "6. Back" << endl;
          cout << "7. Empty" << endl;
          cout << "8. Insert" << endl;
          cout << "9. Remove" << endl;
          cout << "10. Find" << endl;
          cout << "11. Test out classes relating to employees" << endl;
          cout << "12. Display current list of integers" << endl;
          cout << "13. Exit" << endl;
          cout << "Enter your choice: ";
          cin >> choice;
  
          switch (choice) {
          case 1:
              cout << "Enter integer to push front: ";
              cin >> item;
              listS.push_front(item);
              break;
          case 2:
              cout << "Enter integer to push back: ";
              cin >> item;
              listS.push_back(item);
              break;
          case 3:
              listS.pop_front();
              break;
          case 4:
              listS.pop_back();
              break;
          case 5:
              cout << "Front integer: " << listS.front() << endl;
              break;
          case 6:
              cout << "Back integer: " << listS.back() << endl;
              break;
          case 7:
              if (listS.empty()) {
                  cout << "List is empty" << endl;
              } else {
                  cout << "List is not empty" << endl;
              }
              break;
          case 8:
             cout << "Enter index to insert at: ";
             cin >> index;
             cout << "Enter integer to insert: ";
             cin >> item;
              listS.insert(index, item);
              break;
          case 9:
             cout << "Enter index to remove: ";
             cin >> index;
              if (listS.remove(index)) {
                 cout << "Integer removed successfully" << endl;
              } else {
                 cout << "Index is beyond the end of the list" << endl;
              }
              break;
          case 10:
          
             cout << "Enter Integer to find: ";
             cin >> item;
              position = listS.find(item);
              if (position == listS.size()) {
                 cout << "Integer not found" << endl;
              } else {
                 cout << "Integer found at position " << position << endl;
              }
              break;
          case 11:
            emp = new Professional(5000, 15);
                cout << "Type: " << emp->getType() << endl;
                cout << "Weekly salary: " << emp->weeklySalary() << endl;
                cout << "Health care contribution: " << emp->healthCare() << endl;
                cout << "Vacation days: " << emp->vacationDays() << endl;
                //delete emp;
                break;
            
  
            
            
            //Single_Linked_List<int> listS;
              //Run tests for the empoyee classes with bob jane and jack as the employees 
              break;
          case 12:
            
            //print out current list 
              break;
          case 13:
              break;
          default:
              cout << "Invalid choice" << endl;
          }
      } while (choice != 13);
  
      return 0;
  }
