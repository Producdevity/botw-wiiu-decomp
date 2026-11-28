extern "C" void fn_032c4568(int, int, void*);
extern "C" int fn_033943e0(void*, int);

namespace {
struct ActorVtable {
    unsigned char padding_0[804];
    int (*getHandle)(void *);
};

struct Actor {
    unsigned char padding_0[232];
    ActorVtable *vtable;
};

struct Source {
    unsigned char padding_0[504];
    unsigned char data[1];
};
}

extern "C" void fn_029517e8(void* source, void* actor, int index) {
    int handle = ((Actor *)actor)->vtable->getHandle(actor);
    if (handle != 0) {
        fn_032c4568(handle, fn_033943e0(source, index), ((Source *)source)->data);
    }
}
