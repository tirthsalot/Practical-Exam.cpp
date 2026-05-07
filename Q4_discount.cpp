#include <iostream>

using namespace std;

class Discount
{
    public:
    virtual void calculateDiscount() {
        cout << "No Discount For Service\n";
    }

    virtual ~ Discount() {

    }
};

class Ac : public Discount
{
    public:
    void calculateDiscount() override {
        cout << "Ac Discount: 20%\n";
    }
};

class Refrigerator : public Discount
{
    void calculateDiscount() override {
        cout << "Refrigerator Discount: 12%\n";
    }
};

class Skincare : public Discount
{
    void calculateDiscount() override {
        cout << "Skincare Discount: 5%\n";
    }
};

int main()
{
    Discount* Discount[3];

    Discount[0] = new Ac ();
    Discount[1] = new Refrigerator ();
    Discount[2] = new Skincare ();

    for (int i = 0; i < 3; i++)
    {
        Discount[i]->calculateDiscount();
    }

    for (int i = 0; i < 3; i++)
    {
        delete Discount[i];
    }

    return 0;
}

