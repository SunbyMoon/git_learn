#include <iostream>
using namespace std;

class Student {
private:
    const char *m_name;
    int m_age;
    float m_score;
public:
    Student(const char *name, int age, float score);
    void show();
};

Student::Student(const char *name, int age, float score) {
    m_name = name;
    m_age = age;
    m_score = score;
}
void Student::show() {
    cout<<m_name<<"'s age is "<<m_age<<", score is "<<m_score<<endl;
}

int main() {
    Student stu("Ming", 15, 92.5f);
    stu.show();

    Student *pstu = new Student("Liu", 16, 96);
    pstu -> show();

    return 0;
}
