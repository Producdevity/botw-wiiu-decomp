typedef int s32;

struct InferredObject;
extern "C" bool fn_02eab1d4(const void*, unsigned int);

extern "C" struct InferredObject *data_10469900;

extern "C" s32 fn_02f21564(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_02eab1d4(data_10469900, 0U) != 0) {
        var_r31 = (*(s32 *)((char *)(arg0) + (0xEC))) != 0;
    }
    return var_r31;
}
