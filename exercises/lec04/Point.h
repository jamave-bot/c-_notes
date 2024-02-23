#ifndef POINT_H
#define POINT_H

class Point{

    // friend function declared outside public/private
    friend double distance(Point& a, Point& b);

public:
    // explicit constructor
    explicit Point(int = 0, int = 0);
    
    // destructor
    ~Point();

    // setters/getters
    Point& setX(int x);
    Point& setY(int y);
    int getX() const;
    int getY() const;

    // getter for static data member
    static unsigned int getCount();

private:
    int x{0};
    int y{0};

    //static data member
    static unsigned int count;
};

#endif