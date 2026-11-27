typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c34550(void);
extern "C" int fn_02dbeeb0(void*);

namespace {
struct Object {
    unsigned char padding_0[0x14];
    s32 mode;
};
}

extern "C" u8 fn_02dbef9c(void *object) {
    s32 result;

    result = 0;
    if ((fn_02dbeeb0(object) != 0) && (((Object *)object)->mode == 1) && (fn_02c34550() == 0)) {
        result = 1;
    }
    return result;
}
