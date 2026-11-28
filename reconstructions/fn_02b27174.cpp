typedef int s32;

extern "C" void fn_031e28f0(void*, void*);
extern "C" int data_1046d3ac;

namespace {
struct Owner {
    char padding_0[0x16C];
    void *handle;
};

struct Pool {
    char padding_0[0x175C4];
    void *allocator;
};
}

extern "C" void fn_02b27174(void *owner) {
    Owner *self = (Owner *)owner;
    void *handle = self->handle;

    if ((handle != 0) && (data_1046d3ac != 0)) {
        void *allocator = ((Pool *)data_1046d3ac)->allocator;
        if (allocator != 0) {
            fn_031e28f0(allocator, handle);
            self->handle = 0;
        }
    }
}
