#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;

    public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student :: set_roll_no(int r){
    roll_number = r;
}

void Student :: get_roll_no(){
    cout<<"The roll no is "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics =m2;
}

void Exam :: get_marks(){
    cout<<"The marks obtained in maths is:"<<maths<<endl;
    cout<<"The marks obtained in physics is:"<<physics<<endl;
}

class Result : public Exam{
    float percentage;

    public:
    void display_results(){
        get_roll_no();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};


int main(){

    Result Jitendra;

    Jitendra.set_roll_no(42);
    Jitendra.set_marks(89, 91);
    Jitendra.display_results();

    return 0;
}

/*
Notes:
1. We are inheriting B from A and C from B:[A--->B--->C]
2. A is the base class for B and B is the base class for C.
3. A--->B--->C is called inheritance path.
*/