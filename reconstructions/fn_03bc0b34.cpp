extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void fn_03bbfc44(int, int);
extern "C" int fn_03bc3914();

extern "C" int fn_03bc0b34(void* arg0, void* arg1) {
    int temp_r3;

    if ((arg0 == 0) || (fn_0308e5a0(0x14U, arg1, 4) == 0) || (temp_r3 = fn_03bc3914(), ((temp_r3 == 0) != 0))) {
        return 0;
    }
    fn_03bbfc44((*(int*)((char*)arg0 + 244)), temp_r3);
    return temp_r3;
}
