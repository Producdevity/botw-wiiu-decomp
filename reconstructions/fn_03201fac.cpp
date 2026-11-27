typedef int s32;

extern "C" int fn_0322df7c(void*);
extern "C" void fn_03251548(void*, void*);
extern "C" int fn_03251690(int);

extern "C" s32 data_1046d618;

namespace {
struct Owner {
    char padding_0[0x724];
    void *source;
};
}

extern "C" void fn_03201fac(void *object) {
    Owner *owner = (Owner *)object;
    s32 resource;

    resource = fn_0322df7c(owner->source);
    if ((resource != 0) && (fn_03251690(data_1046d618) != 0)) {
        fn_03251548((void *) data_1046d618, (void *) resource);
    }
}
