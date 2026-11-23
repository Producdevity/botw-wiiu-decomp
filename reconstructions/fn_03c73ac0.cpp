typedef int s32;

extern "C" void fn_03c73a40(void*, int);

extern "C" void fn_03c73ac0(void *arg0, s32 arg1) {
    fn_03c73a40(arg0, 0xFF);
    fn_03c73a40(arg0, arg1);
}
