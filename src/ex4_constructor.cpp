// https://www.learnsystemc.com/basic/sc_ctor
/*
Every c++ function must have a constructor. For a normal c++ function, a default constructor will be auto-generated if not explicitly provided.
However, every systemC module must have a unique "name", which is provided when instantiating a module object. This requires a constructor with at least one parameter.

SystemC provides a macro (SC_CTOR) for convenience when declaring or defining a constructor of a module. SC_CTOR:
  1. shall only be used where the rules of C++ permit a constructor to be declared and can be used as the declarator of a constructor declaration or a constructor definition.
  2. has only one argument, which is the name of the module class being constructed.
  3. cannot add user-defined arguments to the constructor. If an application needs to pass additional arguments, the constructor shall be provided explicitly. 
  */

#include <systemc> // include the systemC header file
using namespace sc_core; // use namespace


SC_MODULE (module_a) {

    SC_CTOR (module_a) {
        SC_METHOD (func_a);
        SC_METHOD (func_b);
    }

    void func_a () {
        std::cout << name () << std::endl;
    }
    void func_b();

};

void module_a::func_b () {
    std::cout << name() << "func_b" << std::endl;
}



//constructor taking more arguments

SC_MODULE (module_c) {

    const int i;
    
    SC_CTOR (module_c);

    module_c(sc_module_name name_, int i_) : sc_module(name_), i(i_) {
        SC_METHOD(func_c);
    }
    void func_c() {
        std::cout << name() << ", i = " << i << std::endl;
    }

};

int sc_main_ex4 (int, char *[]) {

    module_a a1("module_a");
    module_c c1("c1",1);
    sc_start();
    return 0;
}