extern "C" void fn_03bf6b14(void*);

extern "C" void fn_03bf7418(char* self) {
    fn_03bf6b14(self + 0x14);
    *(unsigned short*)(self + 4) &= 0xFFFE;
}
