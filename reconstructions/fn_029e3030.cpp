typedef signed char s8;
extern "C" void fn_029c875c(void *);
extern "C" void fn_029c9284(void *);

namespace {
struct Object {
    char padding_0[0xAC];
    s8 flag_ac;
    s8 flag_ad;
};
}

extern "C" void fn_029e3030(void *object) {
    fn_029c875c(object);
    ((Object *) object)->flag_ac = 1;
    ((Object *) object)->flag_ad = 0;
    fn_029c9284(object);
}
