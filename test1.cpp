#include <iostream>
using namespace std;

class Student {
public:
    const char *name;
    int age;
    float score;
    
    void say();
};

inline void Student::say() {
    cout << name << "'s age is " << age << ", the score is " << endl;
    }


int main() {
    Student *pStu = new Student;
    
    pStu -> name = "Ming";
    pStu -> age = 15;
    pStu -> score = 92.5f;
    pStu -> say();
    delete pStu;
    
    return 0;
}
