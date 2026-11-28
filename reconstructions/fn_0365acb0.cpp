extern "C" void *data_1047be88;
extern "C" void fn_03657fac(void*);
extern "C" void fn_0365867c(void*);
extern "C" void fn_03659fa8(void*);
extern "C" void fn_0365aa10(void*);

namespace {
struct Globals {
    unsigned char padding_0[1328];
    int mode;
};
}

extern "C" void fn_0365acb0(void* object) {
    int mode;

    mode = ((Globals*)data_1047be88)->mode;
    if ((mode != 0) && (mode != 5) && (mode != 2)) {
        fn_03657fac(object);
        fn_0365867c(object);
        fn_03659fa8(object);
        fn_0365aa10(object);
    }
}
