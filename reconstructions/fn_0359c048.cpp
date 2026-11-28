typedef int s32;
typedef float f32;

namespace {
struct Inner {
    unsigned char padding_0[0x44];
    void *target;
};

struct Owner {
    unsigned char padding_0[0x398];
    Inner *inner;
};
}

extern "C" void fn_03b9fe0c(void*, int, float);

extern "C" s32 fn_0359c048(void *object, s32 index, f32 value) {
    Inner *inner = ((Owner *)object)->inner;
    if (inner != 0) {
        void *target = inner->target;
        if (target != 0) {
            fn_03b9fe0c(target, index, value);
            return 1;
        }
    }
    return 0;
}
