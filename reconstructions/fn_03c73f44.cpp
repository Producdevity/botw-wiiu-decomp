typedef int s32;

extern "C" void fn_03c73ac0(void*, int);
extern "C" void fn_03c73b08(void*, int);

extern "C" void fn_03c73f44(void *arg0) {
    fn_03c73ac0(arg0, 0xDD);
    fn_03c73b08(arg0, 4);
    fn_03c73b08(arg0, (*(s32 *)((char *)(arg0) + (0xEC))));
}
