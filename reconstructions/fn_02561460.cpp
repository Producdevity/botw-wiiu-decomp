typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0255f854(void*, void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03458948(void *);
extern "C" unsigned char data_100e0110[];
extern "C" unsigned char data_100e0250[];

namespace {
struct Object {
    char padding_0[0xC];
    u8 *vtable;
    char padding_10[0x24];
    u8 *secondaryVtable;
    char padding_38[0x28];
    void *resource;
};
}

extern "C" void fn_02561460(void *object, s32 flags) {
    if (object != 0) {
        void *resource = ((Object *)object)->resource;
        ((Object *)object)->vtable = data_100e0110;
        ((Object *)object)->secondaryVtable = data_100e0250;
        if (resource != 0) {
            fn_03458948(resource);
            ((Object *)object)->resource = 0;
        }
        fn_0255f854(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
