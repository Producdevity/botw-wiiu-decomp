typedef int s32;

namespace {
struct VirtualObject {
    void **vtable;
};

struct Owner {
    char padding_0[0x46D8];
    VirtualObject *handler;
};
}

struct InferredObject;
extern "C" bool fn_039a5f78(const void*);
extern "C" int fn_039a9638(void*, void*, int, int, int);

extern "C" void fn_039a99a0(struct InferredObject *owner, void *arg) {
    fn_039a9638(owner, arg, 5, 7, 0);
    if (fn_039a5f78(owner) != 0) {
        VirtualObject *handler = ((Owner *)owner)->handler;
        ((s32 (*)(VirtualObject *, struct InferredObject *))handler->vtable[25])(handler, owner);
    }
}
