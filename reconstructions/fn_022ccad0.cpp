extern "C" int fn_022cc4a0(void*, void*);
extern "C" int fn_03191c58(void*);

namespace {
struct Object {
    char padding_0[0x58];
    char member[1];
};
}

extern "C" unsigned char fn_022ccad0(void *object) {
    int result = 1;

    if (fn_03191c58(((Object *)object)->member) != 0 && fn_022cc4a0(object, ((Object *)object)->member) == 0) {
        result = 0;
    }
    return result;
}
