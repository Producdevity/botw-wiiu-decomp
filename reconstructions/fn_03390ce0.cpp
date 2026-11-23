typedef unsigned char u8;
typedef int s32;

extern "C" void fn_037e5f68(void *);
extern "C" void fn_037fbc1c(void*);

extern "C" void *data_1047b3fc;

extern "C" void fn_03390ce0(s32 arg0) {
    if ((s32) (*(u8 *)((char *)(data_1047b3fc) + (0x349))) == 0) {
        fn_037fbc1c(0);
        fn_037e5f68((void *)(arg0 + 0x40));
        fn_037e5f68((void *)(arg0 + 0xA0));
    }
}
