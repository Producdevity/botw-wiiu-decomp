extern "C" void fn_030ea2cc(void*);
extern "C" int fn_035fd78c(int);
extern "C" int fn_035fdcac(int);

extern "C" int data_1047b054;

extern "C" void fn_0244a510(void* object) {
    int handle = data_1047b054;
    if (handle != 0 && fn_035fd78c(handle) != 0 && fn_035fdcac(handle) != 0) {
        fn_030ea2cc(object);
    }
}
