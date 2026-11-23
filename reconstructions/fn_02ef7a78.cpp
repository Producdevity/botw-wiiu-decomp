typedef unsigned char u8;
typedef int s32;

struct LinkedHolder;
extern "C" void* fn_037e61a8(LinkedHolder *);

extern "C" u8 fn_02ef7a78(struct LinkedHolder **arg0) {
    struct LinkedHolder *temp_r3;
    s32 var_r31;

    temp_r3 = *arg0;
    var_r31 = 0;
    if ((temp_r3 != 0) && (fn_037e61a8(temp_r3) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
