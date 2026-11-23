typedef float f32;

extern "C" void fn_02495978(void*);
extern "C" void fn_0249649c(void*);
extern "C" void fn_02496554(void*);
extern "C" void fn_024966c8(void*);

extern "C" f32 data_100c37b4;

extern "C" void fn_02496744(void *arg0) {
    fn_02495978(arg0);
    (*(f32 *)((char *)(arg0) + (0xB4))) = (f32) data_100c37b4;
    fn_0249649c(arg0);
    fn_02496554(arg0);
    fn_024966c8(arg0);
}
