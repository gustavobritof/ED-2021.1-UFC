//Circle.cpp
#include <iostream>
#include <stdio.h>
#include <cmath>
#include "Circle.h"
#include "Point.h"

using namespace std;



Circle::Circle(){
    m_center = Point(0,0);
    m_radius = 1;
}

Circle::Circle(Point& p, double rad){
    m_center = p;
    m_radius = rad;
}

void Circle::setRadius(double rad){
    m_radius = rad;
}

void Circle::setCenter(Point& p){
    m_center = p;
}

Point& Circle::getCenter(){    
    return m_center;
}

double Circle::getRadius(){
    return m_radius;
}

double Circle::area(){
    return (m_radius*m_radius)*M_PI;
}

bool Circle::contains(Point& p){
    double dx = p.getX()-m_center.getX();
    double dy = p.getY()-m_center.getY();
    double distance = dx*dx + dy*dy;
    if(distance <= m_radius*m_radius){
        return true;
    }
    else{
        return false;
    }
}