extern "C" void fn_037e5f68(void *);
extern "C" void fn_037efe7c(void*, void*);

extern "C" void *data_1047c3c8;

namespace {
struct Object {
    char padding_0[0x7C];
    char member_7c[0x30];
    int value_ac;
    int value_b0;
};
}

extern "C" void fn_03165990(void *object) {
    if (((Object *) object)->value_b0 != 0 || ((Object *) object)->value_ac != 0) {
        fn_037efe7c(data_1047c3c8, &((Object *) object)->value_ac);
    }
    fn_037e5f68(((Object *) object)->member_7c);
}
