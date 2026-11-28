typedef float f32;

extern "C" int fn_02d4c9d0(void*);
extern "C" void fn_02d4c820(void*, void*);
extern "C" void fn_02d4db2c(void*, void*, int, void*, float);

extern "C" f32 data_101e4b64;

namespace {
struct Owner {
    char padding_0[0x8DC];
    unsigned int flags;
    char padding_8E0[0x20];
    unsigned char active;
};
}

extern "C" bool fn_02d4dfb0(void* owner) {
    struct { int value; } slot;

    if (((Owner *)owner)->active != 0) {
        if ((((Owner *)owner)->flags & 1) == 0 || fn_02d4c9d0(owner) != 0) {
            fn_02d4c820(owner, &slot.value);
            fn_02d4db2c(owner, &slot.value, -1, (void*)-1, data_101e4b64);
            return true;
        }
    }
    return false;
}
