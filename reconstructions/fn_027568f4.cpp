extern "C" void fn_027567a0(void* object);
extern "C" void fn_02596638(void* object, void* other);

namespace {
struct Object {
    char padding_0[0x70];
    signed char flag;
};
}

extern "C" void fn_027568f4(void* object, void* other) {
    fn_027567a0(object);
    static_cast<Object*>(object)->flag = 0;
    fn_02596638(object, other);
}
