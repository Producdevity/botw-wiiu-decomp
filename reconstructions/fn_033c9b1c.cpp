typedef int s32;
extern "C" void fn_0308eacc(void*, int, void*, int);

namespace {
struct Object {
    s32 state;
    s32 value_4;
    char data[1];
};
}

extern "C" void fn_033c9b1c(void *object, void *source, s32 value) {
    ((Object *) object)->value_4 = value;
    fn_0308eacc(((Object *) object)->data, 0x800, source, 4);
    ((Object *) object)->state = 1;
}
