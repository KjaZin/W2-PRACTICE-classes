#include <iostream>
#include <string>
using namespace std;

class Person {
	// Write you code here
    public:
        string FirstName;
        string LastName;
        int SecurityNumber;

        Person (string FirstName, string LastName, int SecurityNumber)
        {
            this -> FirstName = FirstName;
            this -> LastName = LastName;
            this -> SecurityNumber = SecurityNumber;
        }

        void setFirstName(string Name) 
        {
            this -> FirstName = Name;
        }

        string toString() 
        {
            return "First Name :" + FirstName + ", Last Name :" + LastName + ", Security number : " + to_string(SecurityNumber);
        }
};

int main() {
    Person ronan ("ronan", "ogor", 4785);

    ronan.setFirstName("ronano");
    std::cout << ronan.toString() << std::endl;

    return 0;
}