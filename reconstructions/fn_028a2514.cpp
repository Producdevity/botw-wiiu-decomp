typedef float f32;

extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);
extern "C" void fn_03489708(void*, void*, float);
extern "C" const unsigned char data_10549dd0[];

extern "C" f32 data_1015337c;

namespace {
struct Object {
    char padding_0[0x2C];
    void *handle;
};
}

extern "C" void fn_028a2514(void *object) {
    void *handle;

    handle = ((Object *)object)->handle;
    if ((handle != 0) && (fn_03485c18(handle) != 0)) {
        fn_03485f68(((Object *)object)->handle);
        fn_03489708(((Object *)object)->handle, (void *)(data_10549dd0), data_1015337c);
    }
}
