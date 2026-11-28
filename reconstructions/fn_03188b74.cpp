typedef float f32;

extern "C" void fn_03187d9c(void*, void*);
extern "C" void fn_0318822c(void*);
extern "C" void fn_0318bbbc(void*, void*);

extern "C" f32 data_1028be64;

namespace {
struct Object {
    char padding_0[4];
    f32 value_4;
    char padding_8[4];
    char member_c[1];
    char padding_d[0xAB];
    char member_b8[1];
};
}

extern "C" void fn_03188b74(void *object) {
    f32 value;

    fn_0318bbbc(static_cast<Object *>(object)->member_c, &static_cast<Object *>(object)->value_4);
    value = data_1028be64 - static_cast<Object *>(object)->value_4;
    fn_03187d9c(static_cast<Object *>(object)->member_b8, &value);
    fn_0318822c(static_cast<Object *>(object)->member_b8);
}
