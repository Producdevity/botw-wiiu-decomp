typedef signed char s8;
extern "C" void fn_03430f34(void*, void*);
extern "C" void fn_03431054(void*, void*);

namespace {
struct Object {
    char padding_0[0x19];
    s8 flag_19;
};
}

extern "C" void fn_03431174(void *object, void *arg) {
    fn_03430f34(object, arg);
    fn_03431054(object, arg);
    ((Object *) object)->flag_19 = 0;
}
