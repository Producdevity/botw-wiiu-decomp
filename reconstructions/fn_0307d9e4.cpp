typedef int s32;

extern "C" void fn_02e8ed94(void*, int, int, void*, void*);
extern "C" void fn_02f40838(int, int, void*);
extern "C" unsigned char data_10549fec[];

extern "C" void *data_104698d0;

extern "C" void fn_0307d9e4(s32 arg0) {
    fn_02f40838(2, arg0, data_10549fec);
    fn_02e8ed94(data_104698d0, 2, 1, 0, 0);
}
