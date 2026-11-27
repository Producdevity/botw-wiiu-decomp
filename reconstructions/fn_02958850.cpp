typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0339488c(void*, void*);
extern "C" int fn_03396390(void*);

extern "C" u8 fn_02958850(void *object) {
    s32 result = 1;
    if ((fn_0339488c(object, (void *)0xA7E979DB) == 0) && (fn_03396390(object) == 0)) {
        result = 0;
    }
    return result;
}
