typedef int s32;

extern "C" int fn_03253098(void*, void*);

extern "C" void fn_03253140(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_03253098(arg0, (*(void **)((char *)(arg0) + (0x934)))) == 0) {
        var_r31 = 3;
    }
    (*(s32 *)((char *)(arg0) + (0x20))) = var_r31;
}
