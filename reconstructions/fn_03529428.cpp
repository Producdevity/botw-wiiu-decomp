typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_0354ed84(void *, const void *);

extern "C" s32 data_10555e7c;
extern "C" s32 data_10555e84;

extern "C" void fn_03529428(void *arg0) {
    void *temp_r3;

    temp_r3 = (char *)arg0 + 4;
    if ((s32) (*(u8 *)((char *)(arg0) + (0x140))) != 0) {
        (*(void **)((char *)(arg0) + (0x144))) = fn_0354ed84(temp_r3, &data_10555e84);
        return;
    }
    (*(void **)((char *)(arg0) + (0x144))) = fn_0354ed84(temp_r3, &data_10555e7c);
}
