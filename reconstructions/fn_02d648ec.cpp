typedef float f32;

extern "C" int fn_02d3369c(void*);
extern "C" void fn_02e1867c(void*, float);
extern "C" void fn_02e1869c(void*, void*);
extern "C" void fn_02e18ec4(void*, float);
extern "C" void fn_02e18ee4(void*, void*);
extern "C" void fn_02e1a1d0(void*, float);
extern "C" void fn_02e1af6c(void*, float);
extern "C" void fn_02e1affc(void*, float);
extern "C" void fn_02e1b01c(void*, void*);

namespace {
struct Object {
    char padding_0[0x16F4];
    void *first;
    void *second;
    void *third;
    char padding_1700[0x120];
    f32 value_1820;
    char padding_1824[8];
    f32 value_182c;
    char padding_1830[8];
    f32 value_1838;
    char padding_183c[8];
    f32 value_1844;
    char padding_1848[8];
    f32 value_1850;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_02d648ec(void *object) {
    if (fn_02d3369c(object) == 0) {
        fn_02e1af6c(0, fields(object)->value_1844);
        fn_02e1affc(0, fields(object)->value_1820);
        fn_02e18ec4(0, fields(object)->value_182c);
        fn_02e1867c(0, fields(object)->value_1838);
        fn_02e1b01c(fields(object)->first, 0);
        fn_02e1869c(fields(object)->second, 0);
        fn_02e18ee4(fields(object)->third, 0);
        fn_02e1a1d0(0, fields(object)->value_1850);
    }
}
