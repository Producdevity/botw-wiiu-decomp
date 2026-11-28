extern "C" int fn_02b333e8(void*);
extern "C" void fn_030ea2cc(void *);

namespace {
struct Object {
    char padding_0[44];
    char member[1];
    char padding_2d[0x33];
    unsigned char flag_60;
};
}

extern "C" int fn_02688840(void* object) {
    if (fn_02b333e8(((Object *) object)->member) != 0 && ((Object *) object)->flag_60 != 0) {
        fn_030ea2cc(object);
        return 1;
    }
    return 0;
}
