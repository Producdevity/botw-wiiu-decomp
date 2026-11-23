typedef int s32;

extern "C" void fn_03ca7de4(void*);
extern "C" void fn_03cb973c(void*);

extern "C" s32 data_103e5c2c;

extern "C" void *fn_03cb979c(void *arg0) {
    fn_03ca7de4(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e5c2c;
    fn_03cb973c(arg0);
    return arg0;
}
