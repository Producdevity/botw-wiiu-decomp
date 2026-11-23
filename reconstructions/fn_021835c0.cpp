typedef int s32;

struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor *);
extern "C" void fn_030e9a28(void*, void*, void*, void*);

extern "C" void fn_021835c0(void *arg0, struct ProcAccessor *arg1) {
    s32 sp8;

    if ((s32) *(*(s32 **)((char *)(arg0) + (0x38))) == 0) {
        sp8 = 0x03000016;
        fn_030e9a28(arg0, fn_030e0414(arg1), &sp8, 0);
    }
}
