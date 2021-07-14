#ifndef PONTO_ED_2021
#define PONTO_ED_2021

/************************************
 * Declaracao da classe
 *************************************/
class Point {
private:
    double m_x, m_y;

public:
    Point();
    Point(double X, double Y);
    ~Point();
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    double distance(const Point &p);
    void print();
};

#endif