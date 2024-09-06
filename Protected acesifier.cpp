#include <iostream>
using namespace std;

class Person {
protected:
    string name, address;
public:
    Person(string nm, string add) {
        name = nm;
        address = add;
    }
    void display() {
        cout << "Name:" << name << endl;
        cout << "Address:" << address << endl;
    }
};

class Student : public Person {
protected:
    int Rollnumber;
    string course;
public:
    Student(string nm, string add, int roll, string cou) : Person(nm, add) {
        Rollnumber = roll;
        course = cou;
    }
    void display() {
        Person::display();
        cout << "Rollnumber:" << Rollnumber << endl;
        cout << "Course:" << course << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
    int experience;
public:
    Teacher(string nm, string add, string sub, int exp) : Person(nm, add) {
        subject = sub;
        experience = exp;
    }
    void display() {
        Person::display();
        cout << "Subject:" << subject << endl;
        cout << "Experience:" << experience << endl;
    }
};

int main() {
    Student st("vishal", "bhopal", 102, "btech");
    Teacher tr("Ram", "indore", "c++", 4);
    st.display();
    tr.display();
    return 0;
}
