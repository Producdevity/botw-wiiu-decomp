typedef unsigned char u8;

extern "C" void fn_0361eae4(void*, void*);

namespace {
struct Object {
    char padding_0[0x14];
    u8 active;
    char padding_15[3];
    char *cursor;
};
}

extern "C" void fn_0361eba4(void *object) {
    if (((Object *) object)->active != 0) {
        fn_0361eae4(object, ((Object *) object)->cursor);
        ((Object *) object)->cursor = ((Object *) object)->cursor + 1;
    }
}
