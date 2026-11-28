extern "C" void fn_025e9c94(void*, void*);
extern "C" int fn_025ed240(void*);
extern "C" int fn_0378db34(void*);

extern "C" void fn_025ed488(void *object) {
    int handle = fn_025ed240(object);
    if (fn_0378db34((void *)handle) != 0) {
        fn_025e9c94(object, (void *)handle);
    }
}
