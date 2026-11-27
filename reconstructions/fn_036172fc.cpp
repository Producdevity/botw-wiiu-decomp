typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03617164(void);
extern "C" int fn_03617230(void);

extern "C" u8 fn_036172fc(void) {
    s32 result = 1;

    if (fn_03617164() == 0 && fn_03617230() == 0) {
        result = 0;
    }
    return result;
}
