typedef signed char s8;

extern "C" unsigned char fn_02e54e5c(void);
extern "C" void fn_031ff300(void*, int, void*);
extern "C" unsigned char fn_0341d958(void);

extern "C" void *data_1046d59c;

extern "C" void fn_02c0a580(void *arg0) {
    if ((fn_02e54e5c() != 0) && (fn_0341d958() == 0)) {
        fn_031ff300(data_1046d59c, 1, (char *)arg0 + 0x1020);
        (*(s8 *)((char *)(arg0) + (0x1030))) = 1;
    }
}
