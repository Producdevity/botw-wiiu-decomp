extern "C" void fn_037ff9c0(void*);
extern "C" void fn_037ffab0(void*);
extern "C" void fn_037ffb7c(void*);
extern "C" void fn_037ffc50(void*);
extern "C" void fn_037ffcc0(void*, int);
extern "C" void fn_037ffce4(void*, int);

namespace {
struct Object {
    char padding_0[0x41];
    unsigned char flag;
};
}

extern "C" void fn_037ffd08(void* object) {
    if (reinterpret_cast<Object *>(object)->flag == 0) {
        fn_037ffcc0(object, 0);
        fn_037ff9c0(object);
        fn_037ffab0(object);
        fn_037ffce4(object, 0);
        fn_037ffc50(object);
        fn_037ffb7c(object);
    }
}
