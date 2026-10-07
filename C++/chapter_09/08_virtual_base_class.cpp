#include<iostream>
using namespace std;

/*
Inheritance:
Student-->Test
Student-->Sport
Test-->Result
Sport-->Result
*/


class Student{
    protected:
        int roll_no;

    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is: "<<roll_no<<endl;
        }
};

// class Test : public virtual Student{}
class Test : virtual public Student{
    protected:
        float maths, physics;

    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"You result is here: "<<endl
                << "Maths: "<< maths<<endl
                << "Physics: "<< physics<<endl;
        }
};


class Sports : virtual public Student{
    protected:
        float score;

    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};


int main(){
    Result jitendra;

    jitendra.set_number(42);
    jitendra.set_marks(89.0, 91.0);
    jitendra.set_score(8.5);
    jitendra.display();

    return 0;
}