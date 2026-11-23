typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02daa1f0(void*);
extern "C" void fn_02daae9c(void*);

extern "C" u8 data_10463ff0;

extern "C" void fn_02dab760(void *arg0) {
    fn_02daa1f0((char *)arg0 + 0x18);
    if ((s32) data_10463ff0 != 0) {
        fn_02daae9c(arg0);
    }
}
