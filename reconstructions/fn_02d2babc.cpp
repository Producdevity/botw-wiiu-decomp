typedef unsigned short u16;
typedef unsigned int u32;

extern "C" int fn_037b7cac(void*);
extern "C" void fn_037b7e9c(void *, unsigned int, void *);

namespace {
struct Object {
    char padding_0[0x14];
    u16 value;
};
}

extern "C" void fn_02d2babc(void *object) {
    if (fn_037b7cac(object) != 0) {
        fn_037b7e9c(object, ((Object *) object)->value, 0);
    }
}
