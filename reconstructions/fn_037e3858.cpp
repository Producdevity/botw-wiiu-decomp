typedef unsigned char u8;

extern "C" void fn_034fc414(void *);
extern "C" void fn_037e2ecc(void*);
extern "C" void fn_037e2f54(void*);
extern "C" void fn_037e37d0(void*, void*);
extern "C" int fn_037fbff0(void);

namespace {
struct Object {
    char padding_0[0x24];
    u8 flags;
    char padding_25[7];
    int state;
};
}

extern "C" void fn_037e3858(void *object, void *context) {
    if (((Object *)object)->state == 0) {
        fn_037fbff0();
        return;
    }
    fn_037e2ecc(object);
    fn_037e2f54(object);
    if (((((Object *)object)->flags >> 1) & 1) ^ 1) {
        fn_034fc414((char *)object + 0x114);
    }
    fn_037e37d0(object, context);
}
