extern "C" void fn_0221018c(void*);
extern "C" void fn_02b61634(void*, void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    char padding_0[0x4C];
    char member[1];
};
}

extern "C" void fn_0220e51c(void **holder) {
    int value;

    fn_0221018c(holder);
    void *target = fn_037966a8(*holder);
    value = 3;
    fn_02b61634(((Object *)holder)->member, target, &value);
}
