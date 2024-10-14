// Casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string.h>

using namespace std;

class abs_vehicle {

    public:
        virtual void v_test() = 0;

};

class abs_car : public abs_vehicle {
    public:
        void v_test() {
            cout << "test virtual function" << endl;
        }


      
};

class Vehicle : public abs_vehicle{
public:
    string name;
    static int count;

    Vehicle(string n) {
        cout << "vehicle created!" << endl;
        id = 5;
        name = n;
        weight = 0;
        count++;
    }

    Vehicle() {

        cout << "This is parent class constructor!" << endl;
        weight = 0;
        count++;
    }



    void test() {

        cout << "this is vehicle" << endl;
    }

    void v_test() {
        cout << "test virtual function" << endl;
    }

protected:
    double weight;
    int get_id() {
        return id;
    }

private:
    int id;


};

int Vehicle::count = 0;

class Car : public Vehicle {

public:
    string drive;
  
    int ret_weight() {
        return weight;
    }

    const int* get_ptr() {
        return &weight;
    }

    string get_drive() const {
        return drive;
    }

    Car(int w) {
        weight = w;
    }

    Car() {
        weight = 0;
        name = "no name";
        Vehicle::Vehicle();
        cout << "called parent class constructor" << endl;
        
    }

    void test(const Vehicle* v) {
        //v->name = "tesst"; this is not allowed (const Vehicle *)
        const Vehicle* q = v; // can only be assined to const variable
        cout << "this is car" << endl;
    }

    void test(Vehicle* const v) {
        v->name = "tesst"; //this time allowed 
        Vehicle test;
        //v = &test; This is not allowed
    }

    void test() {
        cout << "this is car" << endl;
    }


    void v_test() {
        cout << "Example of virtual method!" << endl;
    }

private:
    int weight;

    

};

void call_virtual(abs_vehicle* abs_ptr) { // this can take any type of object; car or vehicle
    abs_ptr->v_test();
}


int main()
{
    Car toyota;
    toyota.name = "toyota";
    
    toyota.test(); // not the vehicle's car's test is called;
    //up-casting
    Vehicle* v_ptr = &toyota;
    v_ptr->name = "ford";
    v_ptr->test(); //only pointer is given compiler can not know it is actually a car, test of vehicle is called!
   
    cout << "Car's name: " << toyota.name << endl;
    Vehicle truck("dodge");
    cout << "truck's name: " << truck.name << endl;

    //down-cating
    Car* car_ptr = (Car*) & truck;
    //this will return a gibberish value ! Because the memory was not filled while creating the vehicle!
    cout << car_ptr->ret_weight() << endl; 

    abs_car car3;
    Car car4;
    const int* holder =  car4.get_ptr(); //returns const value
    const Car car_c; // can only use const function
    car_c.get_drive(); // const object can only call const function
    

     
        abs_vehicle* abs_ptr = &car3;
        abs_ptr->v_test();

        call_virtual(abs_ptr);
        call_virtual(v_ptr);

        abs_vehicle* abs_ptr2 = &car4;
         abs_ptr2->v_test(); // this virtual function is from the parent of the parent

         cout << "total created number of vehicles: " << Vehicle::count << endl;
}  

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
