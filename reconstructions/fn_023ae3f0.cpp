typedef unsigned char u8;
typedef int s32;
extern "C" void fn_023adffc(int);
extern "C" void fn_023ae1ac(void*);

namespace {
struct Object {
    char padding_0[0x48];
    u8 flag_48;
};
}

extern "C" void fn_023ae3f0(void *object) {
    if (((Object *) object)->flag_48 == 0) {
        fn_023ae1ac(object);
    }
    fn_023adffc((s32) object);
}
