typedef unsigned char u8;
typedef int s32;

extern "C" void fn_033ca654(void*, void*);
extern "C" void fn_033cf034(void*, int, void*);

extern "C" void fn_033cfe7c(u8 *flags, void *context) {
    struct { s32 f8; } sp;

    fn_033cf034(&sp.f8, *flags & 1, context);
    fn_033ca654(flags, &sp.f8);
}
