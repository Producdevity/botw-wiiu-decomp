typedef int s32;

struct ListLink;
extern "C" void fn_0308e808(ListLink *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_036d2f2c(void*, void*);
extern "C" void fn_036de330(void*, void*);

extern "C" void fn_036d2f94(void *arg0, void *arg1) {
    void *temp_r29;

    temp_r29 = (char *)arg0 + 0x50;
    fn_030bb668(temp_r29);
    fn_0308e808((ListLink *)((char *)arg1 + (*(s32 *)((char *)(arg0) + (0x21A4)))));
    (*(s32 *)((char *)(arg0) + (0x21A0))) = (s32) ((*(s32 *)((char *)(arg0) + (0x21A0))) - 1);
    fn_036de330((char *)arg0 + 0x1198, arg1);
    (*(s32 *)((char *)(arg1) + (0x2C))) = (s32) ((*(s32 *)((char *)(arg1) + (0x2C))) & 0xBFFFFFFF);
    fn_036d2f2c(arg0, arg1);
    fn_030bb69c(temp_r29);
}
