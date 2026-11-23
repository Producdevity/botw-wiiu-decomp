#include "botw/ghs_intrinsics.h"
#include "botw/heap_manager.h"

extern "C" const unsigned char data_1033f7ac[];
extern "C" void fn_0308e6d0(void* memory);

namespace {
struct Heap;
typedef void (*HeapFree)(Heap* heap, void* address);
struct Heap {
    unsigned char disposer[12];
    void* const* vtable;
};

struct Element {
    ~Element() {}
};

struct OwnedBuffer {
    const void* vtable;
    int count;
    Element* data;
};
typedef char OwnedBufferSize[sizeof(OwnedBuffer) == 12 ? 1 : -1];
}

static void free_buffer(OwnedBuffer* self) {
    if (self->data) {
        for (int i = 0; i < self->count; ++i)
            self->data[i].~Element();
        Heap* heap = static_cast<Heap*>(fn_030a9eb8(data_1046c8b0, self->data));
        reinterpret_cast<HeapFree>(heap->vtable[15])(heap, self->data);
        self->data = 0;
        self->count = 0;
    }
}

static void destruct(OwnedBuffer* self) {
    self->vtable = data_1033f7ac;
    free_buffer(self);
}

extern "C" void fn_03946284(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        destruct(static_cast<OwnedBuffer*>(object));
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
