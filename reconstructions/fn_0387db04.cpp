typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" float fn_03c6fd44(void *, void *);

extern "C" void fn_0387db04(void *arg0, void *arg1) {
    void *temp_r29;

    temp_r29 = (char *)arg0 + 0x34;
    fn_030bb668(temp_r29);
    if (((s32) (*(u8 *)((char *)(arg0) + (0x1C))) == 0) || !(fn_03c6fd44((char *)arg0 + 0x10, arg1) < (*(f32 *)((char *)(arg0) + (0x20))))) {
        (*(s8 *)((char *)(arg0) + (0x24))) = 1;
        (*(f32 *)((char *)(arg0) + (0x28))) = (f32) (*(f32 *)((char *)(arg1) + (0)));
        (*(f32 *)((char *)(arg0) + (0x2C))) = (f32) (*(f32 *)((char *)(arg1) + (4)));
        (*(f32 *)((char *)(arg0) + (0x30))) = (f32) (*(f32 *)((char *)(arg1) + (8)));
    }
    fn_030bb69c(temp_r29);
}
