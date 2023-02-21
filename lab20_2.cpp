#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double a = max((*R1).x,(*R2).x);
    double b = min(((*R1).x + (*R1).w),((*R2).x + (*R2).w));
    double x = b - a;
    double c = min((*R1).y,(*R2).y);
    double d = max(((*R2).y - (*R2).h),((*R1).y - (*R1).h));
    double y = c - d;
    double area = x*y;
    if (x > 0) return area;
    else return 0;
}
