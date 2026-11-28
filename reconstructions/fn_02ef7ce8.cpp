typedef unsigned char u8;

extern "C" int fn_02ef7b08(void*);
extern "C" void fn_02ef7ba0(void *, unsigned);
extern "C" void fn_02ef7c98(void*);
extern "C" const unsigned char data_10263a00[];

namespace {
struct Object {
    char padding_0[0x10];
    u8 *target;
};
}

extern "C" void fn_02ef7ce8(void *object) {
    if (fn_02ef7b08(object) != 0) {
        fn_02ef7c98(object);
        *((Object *) object)->target = data_10263a00[0];
        fn_02ef7ba0(object, 6U);
    }
}
