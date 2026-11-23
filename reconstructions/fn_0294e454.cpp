typedef unsigned char u8;
typedef int s32;

struct Base;
extern "C" unsigned char* fn_0294e3b8(void*);
extern "C" int fn_03396390(void*);

extern "C" u8 fn_0294e454(struct Base *arg0) {
    u8 *temp_r3;
    s32 var_r31;

    temp_r3 = fn_0294e3b8(arg0);
    var_r31 = 0;
    if ((temp_r3 != 0) && (fn_03396390(temp_r3) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
