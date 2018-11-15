#ifndef POINT_H
#define POINT_H


template<typename T>
class Point
{
    public:
        Point();
        Point(Point &o);
        Point(T, T);
        void offset(int, int);
        void print();

    private:
        T x,y;
};

#endif // POINT_H
