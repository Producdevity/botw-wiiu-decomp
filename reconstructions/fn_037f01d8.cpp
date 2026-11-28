extern "C" void fn_037d71ec(void*, int);
extern "C" void fn_037d734c(void*);
extern "C" int fn_037fbff0(void);

namespace {
struct Object {
    char padding_0[0xE0];
    void *child_e0;
    void *child_e4;
    void *child_e8;
    void *child_ec;
};
}

extern "C" void fn_037f01d8(void *object) {
    fn_037fbff0();
    fn_037d734c(((Object *) object)->child_ec);
    fn_037d71ec(((Object *) object)->child_ec, 3);
    fn_037d734c(((Object *) object)->child_e4);
    fn_037d734c(((Object *) object)->child_e8);
    fn_037d734c(((Object *) object)->child_e0);
    fn_037fbff0();
}
