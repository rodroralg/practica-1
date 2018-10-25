#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(Point &o);
        Point(int, int);
        void offset(int, int);
        void print();

    private:
        double x,y;
};




#endif // POINT_H
