extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" void* fn_03a74684(void*);

namespace {
struct Owner {
    char padding_0[0x14];
    void *instance;
};
}

extern "C" void fn_03a549c8(void *object, void *heap) {
    void *instance;

    instance = fn_0308e5a0(0x20U, heap, 4);
    if (instance != 0) {
        instance = fn_03a74684(instance);
    }
    ((Owner *)object)->instance = instance;
}
