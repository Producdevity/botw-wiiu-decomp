extern "C" void fn_02268638(void* object);
extern "C" void fn_02266cc4(void* object, void* other);

namespace {
struct Object {
    char padding_0[0x38];
    signed char flag;
};
}

extern "C" void fn_022686d4(void* object, void* other) {
    fn_02268638(object);
    static_cast<Object*>(object)->flag = 0;
    fn_02266cc4(object, other);
}
