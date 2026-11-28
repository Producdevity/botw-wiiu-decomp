typedef unsigned int u32;

typedef u32 (*VirtualFn)(void *);

namespace {
struct VTable {
    VirtualFn slots[22];
};

struct Object {
    unsigned char padding_0[0x3C];
    VTable *vtable;
};
}

extern "C" void fn_02eaa1a8(void *, unsigned);
extern "C" void fn_02f63400(void *, void *);
extern "C" void fn_02f639fc(void *, void *);
extern "C" void fn_02f66704(void*, void*);
extern "C" void fn_02f66a78(void*, void*);
extern "C" void * data_104698f8;

extern "C" void fn_02f66c18(void *owner, void *object) {
    u32 id;

    id = ((Object *)object)->vtable->slots[21](object);
    fn_02eaa1a8(data_104698f8, id);
    fn_02f66704(owner, object);
    fn_02f63400(owner, object);
    fn_02f639fc(owner, (void *)id);
    fn_02f66a78(owner, object);
}
