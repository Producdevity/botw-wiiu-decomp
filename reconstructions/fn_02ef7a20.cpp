typedef int s32;

extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" int fn_037e5ec0(void*);

namespace {
struct Holder {
    void *object;
    s32 value;
};
}

extern "C" void fn_02ef7a20(void *holder, s32 value, void *heap) {
    void *object;

    object = fn_0308e5a0(0x30U, heap, 4);
    if (object != 0) {
        object = (void *)(fn_037e5ec0(object));
    }
    ((Holder *)holder)->object = object;
    ((Holder *)holder)->value = value;
}
