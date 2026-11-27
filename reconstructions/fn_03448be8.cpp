typedef unsigned char u8;
typedef int s32;

extern "C" void fn_04078480(void *, unsigned char);
extern "C" unsigned fn_0415a468(void *);

namespace {
struct Object {
    unsigned char padding_0[8];
    void *owner;
};
}

extern "C" void fn_03448be8(void *arg0, s32 enabled) {
    u8 mode;
    Object *object = (Object *)arg0;

    mode = 1;
    if (enabled != 0) {
        mode = 2;
    }
    fn_04078480((void *)(fn_0415a468(object->owner) + 0xE0), mode);
}
