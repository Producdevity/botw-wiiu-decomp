typedef int s32;

extern "C" void fn_0319278c(void*);

namespace {
struct Inner {
    char padding_0[4];
    void *resource;
    void *const *vtable;
};

struct Object {
    char padding_0[4];
    Inner *inner;
};
}

extern "C" void fn_0329de20(void *object) {
    Inner *inner = ((Object *)object)->inner;

    if (inner != 0) {
        void *resource = inner->resource;
        if (resource != 0) {
            fn_0319278c(resource);
        }
        ((s32 (*)(void *))inner->vtable[61])(inner);
    }
}
