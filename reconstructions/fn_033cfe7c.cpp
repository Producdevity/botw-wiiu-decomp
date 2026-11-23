typedef unsigned char u8;
typedef int s32;

extern "C" void fn_033ca654(void*, void*);
extern "C" void fn_033cf034(void*, int, void*);

extern "C" void fn_033cfe7c(u8 *arg0, void *arg1) {
    struct { s32 f8; } sp;

    fn_033cf034(&sp.f8, *arg0 & 1, arg1);
    fn_033ca654(arg0, &sp.f8);
}
