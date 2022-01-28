#include <iostream>
#include <string>
using namespace std;

struct college_system {
    string student_name;
    int student_number;
    float GPA;
    float GPA_AfterYear;
    int student_id;
};

void set_students_data(college_system num[], int size);
void get_new_GPA(college_system newest[], int size);
void set_student_id(college_system id[], int size);
void get_students_data(college_system data[], int  size);

int main()
{
    college_system number[3];
    set_students_data(number, 3);
    get_new_GPA(number, 3);
    set_student_id(number, 3);
    get_students_data(number, 3);


}



void set_students_data(college_system num[], int size) {

    for (long long i = 0; i < size; i++) {
        cout << "enter student name" << endl;
        cin >> num[i].student_name;
        cout << "enter student number" << endl;
        cin >> num[i].student_number;
        cout << "enter GPA" << endl;
        cin >> num[i].GPA;
    }
}



void get_new_GPA(college_system newest[], int size) {
    for (long long i = 0; i < size; i++) {
        cout << "enter the new GPA for "<<newest[i].student_name << endl;
        cin >> newest[i].GPA_AfterYear;
    }
    for (long long i = 0; i < size; i++) {
        cout << "the new GPA for student number " << i + 1 << " : ";
        cout << (newest[i].GPA_AfterYear += newest[i].GPA) / 2;
        cout << endl;
    }
}


void set_student_id(college_system id[], int size) {

    for (long long i = 0; i < size; i++) {
        cout << "enter the id for students" << endl;
        cin >> id[i].student_id;
    }
}


void get_students_data(college_system data[], int size) {
    cout << endl << endl << endl << "all the data : " << endl;
    for (long long i = 0; i < size; i++) {

        cout << "student number : " << data[i].student_number << endl;
        cout << "student name : " << data[i].student_name << endl;
        cout << "total GPA : " << data[i].GPA_AfterYear / 2 << endl;
        cout << "student id : " << data[i].student_id << endl << endl;
        cout << "           *******************************************       " << endl << endl;
    }
}