#include <iostream>
using namespace std;

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
   
    LectureDetails(string name, string subject, string course, int numLectures) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numberOfLectures = numLectures;
    }

    void addLectureDetails(std::string subject, std::string course, int numLectures) {
        subjectName = subject;
        courseName = course;
        numberOfLectures = numLectures;
    }
    void displayLectureDetails() {
        cout << "Lecturer: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
    }
};

int main() {
    LectureDetails lecturer1("jaivik", "Mathematics", "Calculus", 20);
    LectureDetails lecturer2("mit", "Physics", "Mechanics", 18);
    LectureDetails lecturer3("Abhijit", "Computer Science", "Programming", 25);
    LectureDetails lecturer4("nikunj", "Biology", "Genetics", 15);
    LectureDetails lecturer5("nilkanth ", "History", "World History", 30);
    lecturer1.displayLectureDetails();
    cout << endl;
    lecturer2.displayLectureDetails();
    cout << endl;
    lecturer3.displayLectureDetails();
    cout << endl;
    lecturer4.displayLectureDetails();
    cout << endl;
    lecturer5.displayLectureDetails();

    return 0;
}

