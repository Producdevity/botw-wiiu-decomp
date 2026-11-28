typedef unsigned char u8;
typedef int s32;
extern "C" void fn_020e4fa0(void*);
extern "C" void fn_020e50bc(void*);

namespace {
struct Object {
    char padding_0[0xF1];
    u8 flag_f1;
};
}

extern "C" void fn_020e5140(void *object) {
    if (((Object *) object)->flag_f1 == 0) {
        fn_020e4fa0(object);
    }
    fn_020e50bc(object);
}
