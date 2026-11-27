extern "C" void fn_030ea2cc(void*);
extern "C" void fn_030ea2e0(void*);
extern "C" int fn_033161a0(int);
extern "C" int fn_03316214(int);

extern "C" int data_1046d780;

extern "C" void fn_0244ba38(void* arg0) {
    int handle = data_1046d780;
    if (handle == 0) {
        fn_030ea2e0(arg0);
        return;
    }
    if (fn_033161a0(handle) == 0) {
        fn_03316214(handle);
        fn_030ea2cc(arg0);
    }
}
