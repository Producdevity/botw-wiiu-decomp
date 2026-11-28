extern "C" void fn_02c12f58(void*);
extern "C" void fn_0310d100(void*);

namespace {
typedef void (*Method)(void *);

struct Object {
    char padding_0[0x68C];
    char block_68c[0x1C];
    Method *vtable;
    char padding_6ac[0x17C];
    char block_828[1];
};
}

extern "C" void fn_0202edc4(void *object) {
    fn_0310d100(((Object *)object)->block_68c);
    ((Object *)object)->vtable[49](((Object *)object)->block_68c);
    ((Object *)object)->vtable[43](((Object *)object)->block_68c);
    fn_02c12f58(((Object *)object)->block_828);
}
