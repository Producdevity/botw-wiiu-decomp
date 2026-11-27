extern "C" void fn_021aac34(void*);
extern "C" void fn_02b61634(void*, void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    char padding_0[0x28];
    char member[1];
};
}

extern "C" void fn_021a73c8(void **holder) {
    int value;

    fn_021aac34(holder);
    void *target = fn_037966a8(*holder);
    value = 3;
    fn_02b61634(((Object *)holder)->member, target, &value);
}
