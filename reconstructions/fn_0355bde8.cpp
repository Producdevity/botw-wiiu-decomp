typedef unsigned char u8;
typedef int s32;
extern "C" void fn_0355bca0(void*);
extern "C" void fn_0355bd44(void*);

namespace {
struct Object {
    char padding_0[0x60];
    u8 flag_60;
};
}

extern "C" void fn_0355bde8(void *object) {
    if (((Object *) object)->flag_60 != 0) {
        fn_0355bca0(object);
        fn_0355bd44(object);
    }
}
