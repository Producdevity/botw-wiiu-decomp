typedef unsigned char u8;

extern "C" void fn_027617d0(void*);
extern "C" void fn_02761de0(void*);
extern "C" int fn_037b84ec(void*, void*);

namespace {
struct Object {
    char padding_0[0xB];
    u8 flags;
};
}

extern "C" void fn_02761878(void *object, void *other) {
    if (fn_037b84ec(object, other) == 0) {
        fn_027617d0(object);
        fn_02761de0(object);
    }
    ((Object *) object)->flags |= 4;
}
