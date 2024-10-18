// FunctionTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template<class TemplateType> //equvilant

void out_func(TemplateType t) {
    cout << t << endl;
}
template<typename TemplateType2, typename TemplateType>

void out_func(TemplateType2 t, TemplateType t2) {
    cout << t << endl;
}

template<typename TemplateType>  // This acts like a modifier, so it should be next to the function /class

class Test {
    public:
        TemplateType t1{}, t2{};
   
        TemplateType sum_func() {
            return t1 + t2;
     }
        

     
};
template<typename TemplateType>  // This acts like a modifier, so it should be next to the function
TemplateType* make_class() {
    TemplateType object;
    return &object;
}

template<typename TemplateType, typename TemplateType2>

void sum_func(TemplateType t1, TemplateType2 t2) {
    cout << t1 + t2 << endl;

}

int main()
{
    
    out_func("test");
    out_func(5);
    out_func(5.6f);
    out_func(6.7);

    sum_func(3, 4);
    sum_func(4, 5.1f);
    sum_func<int>(4.3, 6.2);
    
    Test<int> test1;
    test1.t1 = 5;
    test1.t2 = 3;
    cout << test1.sum_func() << endl;
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
