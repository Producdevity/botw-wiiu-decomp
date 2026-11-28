typedef int s32;

extern "C" int fn_037fffe0(void*, void*, void*);
extern "C" char* data_1047c3d8;

namespace {
struct Object {
    char padding_0[0x14C];
    s32 handle;
};
}

extern "C" s32 fn_034d4180(void *object) {
    if (((Object *) object)->handle == 0) {
        ((Object *) object)->handle = fn_037fffe0(data_1047c3d8, 0, 0);
    }
    return 1;
}
