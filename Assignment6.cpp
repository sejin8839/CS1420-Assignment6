/*
Author - Name:Sejin Yoon ID:u1311019
Date: May 3, 2023
filename: Assignment6.cpp
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct Vertex
{
    float x,y;
}; 

float Distance(const Vertex &v1 ,const Vertex &v2)
{
  
    float dx = v1.x - v2.x;
    float dy = v1.y - v2.y;
    return sqrt(dx*dx + dy*dy);

}

float triangleArea(const Vertex &v1, const Vertex &v2, const Vertex &v3)
{

    float a = Distance(v1, v2);
    float b = Distance(v2, v3);
    float c = Distance(v3, v1);

    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));

}
int main()
{
    Vertex v1,v2,v3;

    cout<< "Enter the first vertex coordinates of the triangle: ";
    std::cin>>v1.x>>v1.y;
    cout<< "Enter the second vertex coordinates of the triangle: ";
    std::cin>>v2.x>>v2.y;
    cout<< "Enter the third vertex coordinates of the triangle: ";
    std::cin>>v3.x>>v3.y;

    float area = triangleArea(v1, v2, v3);

    cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;

    return 0;
}
