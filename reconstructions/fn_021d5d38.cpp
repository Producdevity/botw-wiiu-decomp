typedef unsigned char u8;

extern "C" void fn_021d8598(void*, void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void *, void *, void *);

namespace {
struct Object {
    char padding_0[0x78];
    u8 *flag;
};
}

extern "C" void fn_021d5d38(void *object, void *other) {
    if (*((Object *) object)->flag != 0 && fn_03794838(object, 0, 0) != 0) {
        fn_030ea2cc(object);
        return;
    }
    fn_021d8598(object, other);
}
