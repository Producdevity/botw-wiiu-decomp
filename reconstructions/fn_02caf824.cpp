typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02d52714(void*, int, int, void*, void*, void*);
extern "C" const unsigned char data_10549dd0[];

extern "C" s32 fn_02caf824(void *arg0) {
    fn_02d52714((*(void **)((char *)(arg0) + (0))), (s32) *(*(u8 **)((char *)(arg0) + (0x14))), 0, (void *)(data_10549dd0), 0, (void *)(data_10549dd0));
    return 1;
}
