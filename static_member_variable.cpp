#include <iostream>
using namespace std;

class Student {
public:
    Student(const char *name, int age, float score);
    void show();
private:
    static int m_total;
private:
    const char *m_name;
    int m_age;
    float m_score;
};

int Student::m_total = 0;

Student::Student(const char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
    m_total++;
}
void Student::show() {
    cout<<m_name<<"'s age is "<<m_age<<", the score is "<<m_score<<" (the total number of student is "<<m_total<<")"<<endl;
}

int main() {
    Student stu1("ming", 15, 90);
    stu1.show();
    Student stu2("lei", 16, 80);
    stu2.show();
    Student stu3("hua", 14, 87);
    stu3.show();
    Student stu4("kang", 15, 88); 
    stu4.show();

    return 0;
}
