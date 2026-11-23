typedef int s32;

extern "C" void fn_037afdc0(void*, int);

extern "C" void fn_02b7b6fc(void *arg0) {
    fn_037afdc0(arg0, 0x10);
    fn_037afdc0(arg0, 4);
    (*(s32 *)((char *)(arg0) + (0x364))) = (s32) ((*(s32 *)((char *)(arg0) + (0x364))) | 0x10000);
}
