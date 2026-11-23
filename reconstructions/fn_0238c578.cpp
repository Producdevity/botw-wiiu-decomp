typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0238c4f8(void*);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" u8 fn_0238c578(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_03794838(arg0, 0, 0) != 0) && (fn_0238c4f8(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
