typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03399bac(void*);
extern "C" int fn_03399f08(void*);

extern "C" u8 fn_03399fdc(void *arg0) {
    s32 result = 1;

    if (fn_03399bac(arg0) == 0 && fn_03399f08(arg0) == 0) {
        result = 0;
    }
    return result;
}
