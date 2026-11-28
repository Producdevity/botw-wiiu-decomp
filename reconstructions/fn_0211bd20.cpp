typedef signed char s8;

extern "C" int fn_0211bba0(void*);
extern "C" void fn_0236b44c(void*);
extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0xB4];
    char member[0x14];
    int value_cc;
    s8 flag_d0;
};
}

extern "C" void fn_0211bd20(void *object) {
    fn_0236b44c(object);
    ((Object *) object)->flag_d0 = 1;
    ((Object *) object)->value_cc = fn_0211bba0(object);
    fn_0294f720(((Object *) object)->owner, 0, ((Object *) object)->member);
}
