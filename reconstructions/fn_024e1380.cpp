typedef unsigned char u8;
typedef float f32;

struct Base;
extern "C" const unsigned char* fn_0294e940(void*);

extern "C" void fn_024e1380(struct Base **arg0, void *arg1) {
    u8 *temp_r3;

    temp_r3 = (u8 *)(fn_0294e940(*arg0));
    (*(f32 *)((char *)(arg1) + (0))) = (f32) (*(f32 *)((char *)(temp_r3) + (0)));
    (*(f32 *)((char *)(arg1) + (4))) = (f32) (*(f32 *)((char *)(temp_r3) + (4)));
    (*(f32 *)((char *)(arg1) + (8))) = (f32) (*(f32 *)((char *)(temp_r3) + (8)));
}
