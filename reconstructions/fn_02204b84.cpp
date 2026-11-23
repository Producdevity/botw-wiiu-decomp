typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0223175c(void *);
extern "C" void fn_0339e0c0(void*, void*);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_02204b84(void *arg0) {
    fn_0223175c(arg0);
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x28))) != 0) {
        fn_0339e0c0((*(void **)((char *)(arg0) + (0))), (void *)(data_10549dd0));
    }
}
