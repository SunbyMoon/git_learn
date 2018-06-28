#include <iostream>
using namespace std;

class Student {
private:
    const char *m_name;
    int m_age;
    float m_score;

public:
    void setname(const char *name);
    void setage(int age);
    void setscore(float score);
    void show();
};

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
    cout<<m_name<<"'s age is "<<m_age<<", the score is "<<m_score<<endl;
}

int main() {
    Student stu;
    stu.setname("Ming");
    stu.setage(15);
    stu.setscore(92.5);
    stu.show();

    return 0;
}
