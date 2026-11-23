typedef unsigned char u8;
typedef int s32;

extern "C" void fn_04078480(void *, unsigned char);
extern "C" unsigned fn_0415a468(void *);

extern "C" void fn_03448be8(void *arg0, s32 arg1) {
    u8 var_r31;

    var_r31 = 1;
    if (arg1 != 0) {
        var_r31 = 2;
    }
    fn_04078480((void *)(fn_0415a468((*(void **)((char *)(arg0) + (8)))) + 0xE0), var_r31);
}
