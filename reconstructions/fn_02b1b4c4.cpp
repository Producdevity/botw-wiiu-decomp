extern "C" void fn_02b1b2d8(void*, void*);
extern "C" float fn_02b1b3c4(void*);
extern "C" int fn_02b1b404(void*);
extern "C" void fn_02b1b470(void*);

namespace {
struct Object {
    char padding_0[0x30];
    float value_30;
    char padding_34[8];
    char block_3c[1];
};
}

extern "C" void fn_02b1b4c4(void *object) {
    ((Object *)object)->value_30 = fn_02b1b3c4(object);
    fn_02b1b2d8(object, ((Object *)object)->block_3c);
    if (fn_02b1b404(object) != 0) {
        fn_02b1b470(object);
    }
}
