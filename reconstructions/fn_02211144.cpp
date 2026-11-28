extern "C" void fn_0221da14(void*);
extern "C" void fn_0221da90(void*);
extern "C" void fn_02b33194(int*);
extern "C" const float data_10055480;

extern "C" void fn_02211144(char* self) {
    fn_0221da14(self);
    if (*(float*)(self + 0x30) < data_10055480) {
        fn_0221da90(self);
        return;
    }
    fn_02b33194((int*)(self + 0x28));
}
