extern "C" int fn_033bdad4(void*);
extern "C" int fn_03799e00(void*);

namespace {
struct Object {
    char padding_0[0x7CC];
    char member[1];
};
}

extern "C" unsigned char fn_02008ccc(void *object) {
    int result = 1;

    if (fn_03799e00(object) == 0 && fn_033bdad4(((Object *)object)->member) == 0) {
        result = 0;
    }
    return result;
}
