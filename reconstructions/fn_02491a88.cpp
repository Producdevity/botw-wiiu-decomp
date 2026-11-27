typedef int s32;

extern "C" void fn_02491824(void*);
extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485e4c(void*);

namespace {
struct Object {
    char padding_0[4];
    s32 state;
    void *handle;
};
}

extern "C" void fn_02491a88(void *arg0, s32 arg1) {
    void *handle;

    handle = ((Object *)arg0)->handle;
    ((Object *)arg0)->state = arg1;
    if (handle != 0 && fn_03485c18(handle) == 0) {
        fn_02491824(arg0);
        fn_03485e4c(handle);
    }
}
