typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0308e6d4(void *);
extern "C" void fn_03c29148(void *);
extern "C" void fn_03c29204(void *, int);

extern "C" s32 data_1027be04;
extern "C" s32 data_1027be1c;

namespace {
struct Object {
    s32 *vtable;
    char padding_4[0x40];
    s32 *secondaryVtable;
    void *buffer;
};
}

extern "C" void fn_030c8c6c(void *object, s32 flags) {
    if (object != 0) {
        ((Object *)object)->vtable = &data_1027be04;
        ((Object *)object)->secondaryVtable = &data_1027be1c;
        fn_03c29148(object);
        void *buffer = ((Object *)object)->buffer;
        if (buffer != 0) {
            fn_0308e6d4(buffer);
        }
        fn_03c29204(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
