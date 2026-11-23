extern "C" unsigned char data_1053276c[];
extern "C" void fn_02f525f0(void*, int, void*);
extern "C" void fn_03082d88(int, void*, void*);
extern "C" unsigned* fn_03a38bf4(unsigned* context);

extern "C" void fn_02f52644(void* arg0, int arg1) {
    unsigned int sp8;
    int var_r4;

    fn_03a38bf4((unsigned*)(&sp8));
    var_r4 = 5;
    if (arg1 != 0) {
        var_r4 = 4;
    }
    fn_02f525f0(arg0, var_r4, &sp8);
    fn_03082d88((*(int*)((char*)arg0 + 24)), data_1053276c, &sp8);
}
