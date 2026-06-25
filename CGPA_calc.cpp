#include<iostream>
using namespace std;

double cgpaCalculator(int semester){ 
    double overallGradePoints=0;
    int credits=0;
    
    for(int i=1;i<=semester;i++){
        int courses;
        cout<<"enter the number of courses:";
        cin>>courses;

        double semesterGradePoints=0;
        int semesterCredit=0;

        for(int j=1;j<=courses;j++){
            double grade;
            int credit;

            cout<<"enter the grade:";
            cin>>grade;

            cout<<"enter credit:";
            cin>>credit;

            semesterGradePoints+=grade*credit;
            semesterCredit+=credit;


        }
        if(semesterCredit != 0){
                 double semesterGPA = semesterGradePoints / semesterCredit;
                 cout << "Semester GPA: " << semesterGPA << endl;
        }
        overallGradePoints+=semesterGradePoints;
        credits+=semesterCredit;


    }
    return overallGradePoints/credits;
    

}

int main(){
    int semester;
    cout<<"enter the value of semester:";
    cin>>semester;

    cout<<"CGPA="<<cgpaCalculator(semester);

    return 0;
}