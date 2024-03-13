#ifndef BASE_H
#define BASE_H
#include <string>

class Base{
public:
    explicit Base(int x);

    // setting this to default means we don't have to 
    // implement a destructor in the cpp file
    virtual ~Base() = default; // important to add virtual

    virtual int funA();
    virtual std::string toString(); // virtual keyword is only in the header files
    int getX() const;
private:
    int x = {0};
};

#endif