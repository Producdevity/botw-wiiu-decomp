typedef int s32;

struct InferredObject;
extern "C" void fn_03170948(void*, unsigned int);
extern "C" int fn_03171cd8(void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016d65c;

namespace {
struct Object {
    char padding_0[0x3D0];
    void *target;
};
}

extern "C" void fn_029539a8(void *object) {
    struct { const void* f8; const void* fC; } key;

    void *target = ((Object *)object)->target;
    if (target != 0) {
        key.fC = &data_10263910;
        key.f8 = &data_1016d65c;
        s32 found = fn_03171cd8(target, &key.f8);
        if (found != 0) {
            fn_03170948((struct InferredObject *)found, 1U);
        }
    }
}
