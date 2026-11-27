typedef signed char s8;
typedef int s32;

extern "C" int fn_02a279dc(void *, void *);
extern "C" void* data_1046378c;

namespace {
struct Singleton {
    unsigned char padding_0[0x5C0];
    unsigned char registry[4];
};

struct Object {
    unsigned char padding_0[8];
    s32 state;
    s8 flag;
    unsigned char padding_d[0xA3];
    void *handle;
};
}

extern "C" void fn_02b828b0(void *object_ptr) {
    void *registry = ((Singleton *)data_1046378c)->registry;
    if (registry != 0) {
        fn_02a279dc(registry, ((Object *)object_ptr)->handle);
    }
    ((Object *)object_ptr)->state = 2;
    ((Object *)object_ptr)->flag = 0;
}
