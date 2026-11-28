typedef int s32;

struct InferredObject;
extern "C" void fn_03170958(void*, unsigned int);
extern "C" int fn_03171cd8(void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016d664;

namespace {
struct Object {
    char padding_0[0x3D0];
    void *target;
};
}

extern "C" void fn_02953a00(void *object) {
    struct { const void* f8; const void* fC; } key;

    void *target = ((Object *)object)->target;
    if (target != 0) {
        key.fC = &data_10263910;
        key.f8 = &data_1016d664;
        s32 found = fn_03171cd8(target, &key.f8);
        if (found != 0) {
            fn_03170958((struct InferredObject *)found, 1U);
        }
    }
}
