extern "C" int fn_02a22a60(void*, void*);
extern "C" void fn_02a23ca4(void*, void*);
extern "C" bool fn_0378da88(void *);

extern "C" void fn_02a23ce0(void *arg0, void *arg1) {
    if (fn_0378da88(arg1) != 0) {
        fn_02a23ca4(arg0, (void *)(fn_02a22a60(arg0, arg1)));
    }
}
