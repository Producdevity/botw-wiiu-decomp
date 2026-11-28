typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034cc350(int);

extern "C" void fn_032e36f8(s32 *object, s32 flags) {
    if (object != 0) {
        s32 handle = *object;
        if (handle != 0) {
            fn_034cc350(handle);
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
