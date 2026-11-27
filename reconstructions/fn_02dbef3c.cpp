typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c34550(void);
extern "C" int fn_02dbeeb0(void*);

namespace {
struct Object {
    char padding_0[0x14];
    s32 count;
};
}

extern "C" u8 fn_02dbef3c(void *arg0) {
    s32 result = 0;

    if (fn_02dbeeb0(arg0) != 0 && ((Object *)arg0)->count == 0 && fn_02c34550() == 0) {
        result = 1;
    }
    return result;
}
