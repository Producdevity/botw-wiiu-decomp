typedef float f32;

extern "C" void fn_02c50fdc(void*);
extern "C" unsigned char data_1051365c[];

extern "C" void fn_02c51000(void *arg0) {
    fn_02c50fdc(arg0);
    (*(f32 *)((char *)(data_1051365c) + (0))) = (f32) (*(f32 *)((char *)(arg0) + (0)));
    (*(f32 *)((char *)(data_1051365c) + (4))) = (f32) (*(f32 *)((char *)(arg0) + (4)));
    (*(f32 *)((char *)(data_1051365c) + (8))) = (f32) (*(f32 *)((char *)(arg0) + (8)));
}
