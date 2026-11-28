typedef unsigned char u8;

extern "C" unsigned char fn_0308060c(void*);
extern "C" int fn_03080658(void);

extern "C" u8 data_1046bd31;

extern "C" u8 fn_03039fec(void *object) {
    if ((fn_0308060c(object) != 0) && (fn_03080658() == 0)) {
        return 0U;
    }
    return data_1046bd31;
}
