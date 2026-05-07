#include<iostream>

using namespace std;

class Car
{
    private:
    string model;
    int year;
    int speed;

    public:
    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    void setSpeed(int s)
    {
        speed = s;
    }

    string getModel ()
    {
        return model;
    }

    int getYear ()
    {
        return year;
    }

    int getSpeed ()
    {
        return speed;
    }
};

int main()
{
    Car c1;

    c1.setModel("Land Rover");
    c1.setYear(2025);
    c1.setSpeed(200);

    cout << "Car Model:" << c1.getModel () << endl;
    cout << "Car Year:" << c1.getYear () << endl;
    cout << "Car Speed" << c1.getSpeed () << "km/h" << endl;

    return 0;
}