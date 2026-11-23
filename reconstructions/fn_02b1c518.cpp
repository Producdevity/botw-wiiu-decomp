typedef float f32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" f32 data_101abd38;

extern "C" void fn_02b1c518(void *arg0) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0x24;
    fn_030bb668(temp_r31);
    (*(f32 *)((char *)(arg0) + (0xDC))) = (f32) data_101abd38;
    fn_030bb69c(temp_r31);
}
