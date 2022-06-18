#include "../hfile//TheChernoCplusplusTutorial.h"
#include <iostream>

using namespace  std;

    class Base
    {
    public:
        Base()
        {
            cout << "Instance base" << endl;
        }
        ~Base()
        {
            cout << "Destroy base" << endl;
        }
    };

    class Derived : public Base
    {
    public:
        Derived()
        {
            cout << "Instance dERIVED" << endl;

        }
        ~Derived()
        {
            cout << "Destroy Derived" << endl;
        }
    };

    class BaseVDestructor
    {
    public:
        BaseVDestructor()
        {
            cout << "Instance base" << endl;
        }
        virtual ~BaseVDestructor()
        {
            cout << "Destroy base" << endl;
        }
    };

    class DerivedVdestructor : public BaseVDestructor
    {
    public:
        DerivedVdestructor()
        {
            cout << "Instance Derived" << endl;
        }
        ~DerivedVdestructor()
        {
            cout << "Destroy Derived" << endl;
        }

    };

    void ExampleVirtualDestructor()
    {
        //normaly destructor called when object destroyed
        Base* base = new Base();
        delete base;
        cout << "-----------------------------" << endl;
        //same thing when declare derived object but not polimorphim
        Derived* derived = new Derived();
        delete derived;
        cout << "-----------------------------" << endl;
        //in case polimorphim the base class not now if derived class have destructor because not inheritance from base(virtual)
        Base* polimorph = new Derived();
        delete polimorph;
        cout << "-----------------------------" << endl;
        //to avoid the problem use virtual in destructor function to inheritance teh derived class
        BaseVDestructor* baseVDes = new DerivedVdestructor();
        delete baseVDes;
    };




