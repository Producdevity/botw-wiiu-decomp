extern "C" int fn_03078030(int);
extern "C" void fn_0307dafc();
extern "C" void fn_030ea2cc(void *);

namespace {
struct Object {
    char padding_0[16];
    int state;
};
}

extern "C" void fn_02165c08(void* object) {
    if (((Object *) object)->state == 1) {
        if (fn_03078030(0) != 0) {
            fn_030ea2cc(object);
        }
    }
    if (((Object *) object)->state == 0) {
        fn_0307dafc();
        ((Object *) object)->state++;
    }
}
