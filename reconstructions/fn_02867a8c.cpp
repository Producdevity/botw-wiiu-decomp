typedef int s32;

extern "C" void fn_028650bc(void*, int);
extern "C" void fn_02865c54(void*, int);

extern "C" void fn_02867a8c(void *arg0) {
    fn_028650bc(arg0, -1);
    fn_02865c54(arg0, -1);
    (*(s32 *)((char *)(arg0) + (0x1A8))) = 0;
    (*(s32 *)((char *)(arg0) + (0x1DC))) = 0;
}
