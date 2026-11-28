extern "C" void fn_02296ad8(void*);
extern "C" void fn_037924b4(void*);
extern "C" const float data_1006ed38;

extern "C" void fn_0229aa38(char* self) {
    fn_02296ad8(self);
    if (!(*(float*)(self + 0x18) > data_1006ed38)) {
        self[0xB] |= 4;
        return;
    }
    fn_037924b4(self + 0x18);
}
