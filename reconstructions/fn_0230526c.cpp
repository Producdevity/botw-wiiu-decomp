extern "C" void fn_023067f8(void*);
extern "C" void fn_02b61634(void*, void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    char padding_0[0x7C];
    char member[1];
};
}

extern "C" void fn_0230526c(void **holder) {
    int value;

    fn_023067f8(holder);
    void *target = fn_037966a8(*holder);
    value = 3;
    fn_02b61634(((Object *)holder)->member, target, &value);
}
