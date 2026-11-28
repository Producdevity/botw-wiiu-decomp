extern "C" int fn_02c34550(void);
extern "C" int fn_02dbeeb0(void*);

namespace {
struct Object {
    char padding_0[0x14];
    int count;
};
}

extern "C" unsigned char fn_02dbef3c(void* object) {
    int result = 0;

    if (fn_02dbeeb0(object) != 0 && ((Object*)object)->count == 0 && fn_02c34550() == 0) {
        result = 1;
    }
    return result;
}
