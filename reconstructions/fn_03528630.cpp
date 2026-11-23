typedef int s32;
typedef float f32;

extern "C" void* fn_0354ed84(void *, const void *);

extern "C" f32 data_102d7c8c;
extern "C" s32 data_10555e38;

extern "C" void fn_03528630(void *arg0) {
    fn_0354ed84((char *)arg0 + 4, &data_10555e38);
    (*(f32 *)((char *)(arg0) + (0x144))) = (f32) data_102d7c8c;
}
