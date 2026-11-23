extern "C" unsigned char data_1053210c[];
extern "C" unsigned char data_1053213c[];
extern "C" void fn_03082c70(void*, int, int);
extern "C" unsigned* fn_03a38bf4(unsigned* context);

extern "C" void fn_02f4d720(int arg0, unsigned int arg1, int arg2) {
    unsigned int sp8;
    int var_r4;

    if (arg1 < 4U) {
        fn_03a38bf4((unsigned*)(&sp8));
        var_r4 = (*(int*)((char*)(data_1053213c) + 4));
        if (arg1 < (unsigned int) (*(unsigned int*)(data_1053213c))) {
            var_r4 += arg1*  8;
        }
        fn_03082c70(data_1053210c, var_r4, arg2);
    }
}
