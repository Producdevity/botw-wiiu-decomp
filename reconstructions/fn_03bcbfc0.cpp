typedef int s32;

struct ListLink;
extern "C" void fn_0308e808(ListLink *);
extern "C" void fn_03bcb110(void*);

extern "C" void fn_03bcbfc0(void *arg0, s32 arg1) {
    fn_0308e808((ListLink *)(arg1 + (*(s32 *)((char *)(arg0) + (0x3C)))));
    (*(s32 *)((char *)(arg0) + (0x38))) = (s32) ((*(s32 *)((char *)(arg0) + (0x38))) - 1);
    fn_03bcb110(arg0);
}
