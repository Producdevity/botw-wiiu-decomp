extern "C" unsigned char data_1053276c[];
extern "C" void fn_02f525f0(void*, int, void*);
extern "C" void fn_03082d88(int, void*, void*);
extern "C" unsigned* fn_03a38bf4(unsigned* context);

namespace {
struct Object {
    unsigned char padding_0[24];
    int handle;
};
}

extern "C" void fn_02f52644(void* object, int enabled) {
    unsigned int context;
    int mode;

    fn_03a38bf4((unsigned*)(&context));
    mode = 5;
    if (enabled != 0) {
        mode = 4;
    }
    fn_02f525f0(object, mode, &context);
    fn_03082d88(((Object*)object)->handle, data_1053276c, &context);
}
