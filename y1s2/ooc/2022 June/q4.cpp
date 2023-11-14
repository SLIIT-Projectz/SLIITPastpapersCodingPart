#include <iostream>

using namespace std;


class Frame
{
public:
    Frame();
    ~Frame();
};

Frame::Frame(/* args */)
{
}

Frame::~Frame()
{
}


class Event
{
public:
    Event();
    ~Event();
};

class Shape
{
public:
    Shape();
    ~Shape();
};

class Rectangle: public Shape
{
public:
    Rectangle();
    ~Rectangle();
};

class Polygon
{
public:
    Polygon();
    ~Polygon();
};

class Circle: public Shape
{
private:
    float radius;
    int center;
    Point *p[2];
public:
    Circle(){
        p[0] = new Point();
        p[1] = new Point();
    }
    double area(float radius);
    void circum();
    void setCentre();
    void setRadius();
    ~Circle();
};


class Window
{
private:
    Shape *sh[2];
    DrawingContext *dc[2];

public:
    Window(Shape *sh1, Shape *sh2){
        sh[0] = sh1;
        sh[1] = sh2;
    }
    void open();
    void handleEvent(Event *e1);
    ~Window();
};

class ConsoleWindow: public Window
{
public:
    ConsoleWindow: (/* args */);
    ~ConsoleWindow: ();
};

class DialogBox
{
private:
    DataControler *dc;
public:
    DialogBox();
    ~DialogBox();
};

class DataController
{
private:
    DialogBox *db;
public:
    DataController();
    ~DataController();
};

class Point
{
public:
    Point();
    ~Point();
};

class DrawingContext
{
private:
    Window *win;
public:
    DrawingContext();
    //etc etc functions comes with void functions.
    ~DrawingContext();
};

int main(){
    Frame *f = new Frame();
    Event *e = new Event();
    Shape *s = new Shape();
    Rectangle *r = new Rectangle();
    Polygon *p = new Polygon();
    Circle *c = new Circle();
    Window *w = new Window(22, 23);
    w->handleEvent(e);
    ConsoleWindow *cw = new ConsoleWindow();
    DialogBox *db = new DialogBox();
    DataController *dc = new DataController();
    Point *po = new Point();
    DrawingContext *dc = new DrawingContext();

    return 0;
}