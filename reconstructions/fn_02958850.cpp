typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0339488c(void*, void*);
extern "C" int fn_03396390(void*);

extern "C" u8 fn_02958850(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_0339488c(arg0, (void *)0xA7E979DB) == 0) && (fn_03396390(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
