extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

namespace {
struct Object {
    char padding_0[0x14];
    void **first;
    void **second;
};
}

extern "C" void fn_02340c3c(void *object) {
    if (fn_03794838(object, *((Object *) object)->first, *((Object *) object)->second) != 0) {
        fn_030ea2cc(object);
    }
}
