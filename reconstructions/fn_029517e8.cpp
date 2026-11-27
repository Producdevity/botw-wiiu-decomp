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

extern "C" void fn_029517e8(void* arg0, void* arg1, int arg2) {
    int handle = ((Actor *)arg1)->vtable->getHandle(arg1);
    if (handle != 0) {
        fn_032c4568(handle, fn_033943e0(arg0, arg2), ((Source *)arg0)->data);
    }
}
