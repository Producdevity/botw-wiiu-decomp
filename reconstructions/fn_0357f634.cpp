typedef int s32;

extern "C" int fn_0359ca44(void*, void*, void*, void*, void*);
extern "C" void fn_03b9f5f0(void*);

extern "C" void fn_0357f634(s32 *outHandle, void *name, void *param, void *owner) {
    s32 handle;

    if (name != 0) {
        handle = fn_0359ca44(name, owner, 0, 0, param);
        *outHandle = handle;
        if (handle != 0) {
            fn_03b9f5f0((void *) handle);
        }
    }
}
