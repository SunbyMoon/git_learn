#include <iostream>
using namespace std;

class Student {
private:
    char const *m_name;
    int m_age;
    float m_score;
public:
    Student();
    Student(const char *name, int age, float score);
    void setname(const char *name);
    void setage(int age);
    void setscore(float score);
    void show();
};

Student::Student() {
    m_name = NULL;
    m_age = 0;
    m_score = 0.0;
}
Student::Student(const char *name, int age, float score) {
    m_name = name;
    m_age = age;
    m_score = score;
}
void Student::setname(const char *name) {
    m_name = name;
}
void Student::setage(int age) {
    m_age = age;
}
void Student::setscore(float score) {
    m_score = score;
}
void Student::show() {
    if (m_name == NULL || m_age <= 0) {
        cout<<"not initiation yet"<<endl;
    }
    else {
        cout<<m_name<<"'s age is "<<m_age<<", score is "<<m_score<<endl;
    }
}

int main() {
    Student stu("Ming", 15, 92.5f);
    stu.show();

    Student *pstu = new Student();
    pstu -> show();
    pstu -> setname("LIU");
    pstu -> setage(16);
    pstu -> setscore(96);
    pstu ->show();

    return 0;
}















