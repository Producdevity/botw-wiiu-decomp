typedef int s32;
typedef float f32;

extern "C" float fn_0290c7b8(void*);
extern "C" int fn_0290c890(void*);
extern "C" void fn_0290ca04(void*);
extern "C" void fn_0290cb30(void*);

extern "C" void fn_0290cbd8(void *arg0) {
    (*(f32 *)((char *)(arg0) + (0x30))) = fn_0290c7b8(arg0);
    (*(s32 *)((char *)(arg0) + (0x34))) = fn_0290c890(arg0);
    fn_0290ca04(arg0);
    fn_0290cb30(arg0);
}
