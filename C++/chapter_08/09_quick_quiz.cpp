#include<iostream>
#include<cmath>
using namespace std;

//Create a function(Hint: make it a friend function) which takes 2 points objects and computes the distance between thode points.

class Point{
    int x, y;

    friend float distance(Point, Point);
    public:
    Point(){}
    Point(int a, int b);

};

Point :: Point(int a, int b){
    x = a;
    y = b;
}

float distance(Point p, Point q){
    int x = (p.x-q.x)*(p.x-q.x);
    int y = (p.y-q.y)*(p.y-q.y);
    return sqrt(x + y);

}
int main(){
    Point p, q;
    p = Point(1, 3);
    q = Point(3, 4);
    
    cout<<"The distance between these two points is "<<distance(p, q);
    
    return 0;
}