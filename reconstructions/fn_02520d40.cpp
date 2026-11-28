extern "C" unsigned int fn_0348609c(int);
extern "C" void fn_03489294(void*, int);

namespace {
struct Object {
    char padding_0[0x17C];
    void *member_17c;
    void *member_180;
};
}

extern "C" void fn_02520d40(void* object, unsigned int value) {
    if (fn_0348609c((int) ((Object *) object)->member_180) != value) {
        fn_03489294(((Object *) object)->member_180, value);
    }
    if (fn_0348609c((int) ((Object *) object)->member_17c) != value) {
        fn_03489294(((Object *) object)->member_17c, value);
    }
}
