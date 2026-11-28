extern "C" void fn_03bf6b14(void*);

extern "C" void fn_03c01178(char* self) {
    fn_03bf6b14(self + 0x18);
    *(unsigned short*)(self + 4) &= 0xFFFE;
}
