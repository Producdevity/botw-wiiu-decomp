typedef int s32;

extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Source {
    void *owner;
    unsigned char padding_4[0x70];
    s32 value;
};
}

extern "C" void fn_032becf8(void *arg0) {
    s32 value;
    void *target;
    Source *source = (Source *)arg0;

    target = fn_037966a8(source->owner);
    if (target != 0) {
        value = source->value;
        fn_0344a898(target, &value);
    }
}
