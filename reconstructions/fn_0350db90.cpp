typedef signed char s8;

extern "C" void fn_0327eecc(void*);
extern "C" int fn_03580de8(void*);

extern "C" void fn_0350db90(void *arg0) {
    fn_0327eecc(arg0);
    if (fn_03580de8((*(void **)((char *)(arg0) + (0x74)))) == 0) {
        (*(s8 *)((char *)((*(void **)((char *)(arg0) + (0x74)))) + (0x270))) = 1;
    }
}
