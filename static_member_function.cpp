#include <iostream>
using namespace std;

class Student {
public:
    Student(const char *name, int age, float score);
    void show();
public:
    static int getTotal();
    static float getPoints();
private:
    static int m_total;
    static float m_points;
private:
    const char *m_name;
    int m_age;
    float m_score;
};

int Student::m_total = 0;
float Student::m_points = 0.0;

Student::Student(const char *name, int age, float score):m_name(name),m_age(age),m_score(score) {
    m_total++;
    m_points += score;
}
void Student::show() {
    cout<<m_name<<"'s age is "<<m_age<<", the score is "<<m_score<<endl;
}

int Student::getTotal() {
    return m_total;
}
float Student::getPoints() {
    return m_points;
}

int main() {
    (new Student("ming", 15, 90.6)) -> show();
    (new Student("lei", 16, 80.5)) -> show();
    (new Student("hua", 16, 99.0)) -> show();
    (new Student("kang", 14, 60.8)) -> show();

    int total = Student::getTotal();
    float points = Student::getPoints();
    cout<<"The number of student is "<<total<<", the sum of score is "<<points<<", the average score is "<<points/total<<"."<<endl;

    return 0;
}













