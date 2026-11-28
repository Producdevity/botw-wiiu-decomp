typedef unsigned char u8;
typedef int s32;
extern "C" void fn_038a0afc(void*);

namespace {
struct Object {
    char padding_0[0xC];
    u8 flag_c;
};
}

extern "C" void fn_038a0bac(void *object) {
    if (((Object *) object)->flag_c == 0) {
        fn_038a0afc(object);
    }
    ((Object *) object)->flag_c = 0;
}
