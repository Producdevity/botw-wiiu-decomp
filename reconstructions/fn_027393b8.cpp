typedef int s32;

extern "C" void fn_0273933c(void*, void*);
extern "C" s32 fn_0273935c(void * *);
extern "C" void fn_027393a8(void*, void*);

extern "C" void fn_027393b8(void **arg0, void *arg1) {
    if ((*(*(s32 **)((char *)(arg0) + (0x20))) & 0x20) || (fn_0273935c(arg0) == 0)) {
        fn_0273933c(arg0, arg1);
        return;
    }
    fn_027393a8(arg0, arg1);
}
