typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03a31898(void *, void *, void *, int);
extern "C" void fn_03a3bc0c(void*, void*);

namespace {
struct Node {
    char padding_0[0x44];
    void *handle;
    char padding_48[0xD];
    u8 state;
};
}

extern "C" void fn_03082394(void *object, void *other, s32 skip) {
    u8 state;
    void *handle;
    void *otherHandle;
    void *flag;

    if (object != 0) {
        state = ((Node *)object)->state;
        if (((s32)state == 0) || ((s32)state == 3)) {
            flag = (void *)1;
            if (skip != 0) {
                flag = 0;
            }
            fn_03a31898(object, 0, flag, 1);
        }
        handle = ((Node *)object)->handle;
        if ((handle != 0) && (other != 0) && ((s32)((Node *)other)->state != 0)) {
            otherHandle = ((Node *)other)->handle;
            if (otherHandle != 0) {
                fn_03a3bc0c(handle, otherHandle);
            }
        }
    }
}
