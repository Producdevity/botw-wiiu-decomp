extern "C" void fn_03083708(void*, void*);
extern "C" void fn_03a2b0d4(void* p);
extern "C" void fn_03a2b1e0(int, void*, int);
extern "C" unsigned* fn_03a38bf4(unsigned* context);

namespace {
struct Object {
    char padding_0[0xB0];
    int handle;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_02f0826c(void* object, void* target) {
    unsigned context;

    if (fields(object)->handle != 0) {
        fn_03a38bf4(&context);
        fn_03083708(target, &context);
        fn_03a2b1e0(fields(object)->handle, &context, 0);
        fn_03a2b0d4(reinterpret_cast<void *>(fields(object)->handle));
    }
}
