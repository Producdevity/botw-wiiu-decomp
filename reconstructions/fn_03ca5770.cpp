typedef int s32;

extern "C" void fn_03ca7d98(void*);

extern "C" void fn_03ca5770(void *arg0) {
    fn_03ca7d98(arg0);
    (*(s32 *)((char *)(arg0) + (0x58))) = 0;
    (*(s32 *)((char *)(arg0) + (0x4C))) = 4;
    (*(s32 *)((char *)(arg0) + (0x50))) = 0x10;
    (*(s32 *)((char *)(arg0) + (0x5C))) = -1;
    (*(s32 *)((char *)(arg0) + (0x60))) = 0;
}
