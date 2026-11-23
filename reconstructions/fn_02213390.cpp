typedef signed char s8;
typedef float f32;

extern "C" void fn_0221d9f4(char *);

extern "C" void fn_02213390(s8 *arg0) {
    void *temp_r12;

    fn_0221d9f4((char *)(arg0));
    temp_r12 = (*(void **)((char *)(arg0) + (0)));
    (*(f32 *)((char *)(arg0) + (0x1C))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x204)));
    (*(f32 *)((char *)(arg0) + (0x20))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x214)));
    (*(f32 *)((char *)(arg0) + (0x24))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x224)));
}
