typedef unsigned char u8;

extern "C" void fn_023fe62c(void*);
extern "C" int fn_03794838(void*, void*, void*);

namespace {
struct Object {
    char padding_0[0xB];
    u8 flags;
};
}

extern "C" void fn_02344dd0(void *object) {
    fn_023fe62c(object);
    if (fn_03794838(object, 0, 0) != 0) {
        ((Object *) object)->flags |= 4;
    }
}
