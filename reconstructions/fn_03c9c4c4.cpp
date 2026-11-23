typedef int s32;

extern "C" void fn_03c9c42c(void*);
extern "C" void fn_03ca7de4(void*);

extern "C" s32 data_103e462c;

extern "C" void *fn_03c9c4c4(void *arg0) {
    fn_03ca7de4(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e462c;
    fn_03c9c42c(arg0);
    return arg0;
}
