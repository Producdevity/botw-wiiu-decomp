typedef int s32;

extern "C" unsigned char fn_034dc5d0(void *);
extern "C" int fn_034dc784(void*, void*);

extern "C" s32 fn_0306c478(void *arg0, void *arg1) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_034dc5d0(arg0) != 0) {
        var_r31 = fn_034dc784(arg0, arg1);
    }
    return var_r31;
}
