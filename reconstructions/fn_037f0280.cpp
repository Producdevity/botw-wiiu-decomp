extern "C" void fn_037d7420(void*);
extern "C" int fn_037fbff0(void);

namespace {
struct Object {
    char padding_0[0xE0];
    void *member_e0;
    void *member_e4;
    void *member_e8;
    void *member_ec;
};
}

extern "C" void fn_037f0280(void *object) {
    fn_037fbff0();
    fn_037d7420(((Object *) object)->member_e0);
    fn_037d7420(((Object *) object)->member_e8);
    fn_037d7420(((Object *) object)->member_e4);
    fn_037d7420(((Object *) object)->member_ec);
    fn_037fbff0();
}
