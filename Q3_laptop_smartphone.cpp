
#include <iostream>

using namespace std;

class Device
{
    private:
    string brand;
    int powerConsumption;

    public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
    public:
    void displayLaptop()
    {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << endl;
    }
};

class Smartphone : public Device
{
    public:
    void displaySmartphone()
    {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption () << endl;

    }
};
int main()

{
    Laptop l1;
    l1.setBrand("Dell");
    l1.setPowerConsumption(65);

    Smartphone s1;
    s1.setBrand("Samsung");
    s1.setPowerConsumption(25);

    cout << "----Laptop Information----" << endl;
    l1.displayLaptop();

    cout << "\n----Smartphone Information----" << endl;
    s1.displaySmartphone();

    
    return 0;

}