// https://www.learnsystemc.com/basic/module

#include <systemc> // include the systemC header file
using namespace sc_core; // use namespace

#include "helper_fct.h"

SC_MODULE (first_module) {

    
    SC_CTOR(first_module) {
        DISPLAY ("Hello from my first module")
        std::cout << name() << " constructor" << std::endl;
    }

};

// approach #2, this uses c++ syntax and is more readiable
struct MODULE_B : public sc_module {

  SC_CTOR(MODULE_B) {
    std::cout << name() << " constructor" << std::endl;
  }

};

//approach #3, use class instead of struct
class MODULE_C : public sc_module {
    
    // have to explicitly declare constructor function as public 
    public:
    SC_CTOR(MODULE_C) {
        std::cout << name() << " constructor" << std::endl;
    }
};


int sc_main_ex3 (int, char *[]) {

    first_module f1("f1");
    first_module f2("f2");

    MODULE_B b("b1");

    MODULE_C c("c1");

    //this can be skipped in this example because module 
    // instantiation happens during elaboration phase which 
    // is before sc_start

    sc_start();
    return 0;


}