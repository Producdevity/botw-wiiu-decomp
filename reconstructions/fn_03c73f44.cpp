typedef int s32;
extern "C" void fn_03c73ac0(void*, int);
extern "C" void fn_03c73b08(void*, int);

namespace {
struct Object {
    char padding_0[0xEC];
    s32 value_ec;
};
}

extern "C" void fn_03c73f44(void *object) {
    fn_03c73ac0(object, 0xDD);
    fn_03c73b08(object, 4);
    fn_03c73b08(object, ((Object *) object)->value_ec);
}
