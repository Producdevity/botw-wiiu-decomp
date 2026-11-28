extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void fn_0308eee4(int, int);
extern "C" void* fn_030d3cc4();

namespace {
struct Owner {
    char padding_0[132];
    void* heap;
};
}

extern "C" void* fn_030d72a0(void* owner, void* heap) {
    if (heap == 0) {
        heap = ((Owner*)owner)->heap;
    }
    void* storage = fn_0308e5a0(0x8CU, heap, 4);
    void* created = storage;
    if (storage != 0) {
        created = fn_030d3cc4();
    }
    fn_0308eee4((int)(owner), (int)(created));
    return created;
}
