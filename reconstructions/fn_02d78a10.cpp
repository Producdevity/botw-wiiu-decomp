extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030bb668(void *);

extern "C" void **fn_02d78a10(void **arg0, void *arg1) {
    void **self = arg0;
    if ((self != 0) || (self = (void **)(fn_0308e578(4U)), self != 0)) {
        *self = arg1;
        fn_030bb668(arg1);
    }
    return self;
}
