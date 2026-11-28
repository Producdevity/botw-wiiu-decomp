typedef signed char s8;
extern "C" int fn_0288f1b4(void*);
extern "C" void fn_02898520(void *);

namespace {
struct Object {
    char padding_0[0x38];
    s8 flag_38;
};
}

extern "C" void fn_0288f30c(void *object) {
    if (fn_0288f1b4(object) != 0) {
        ((Object *) object)->flag_38 = 1;
    }
    fn_02898520(object);
}
