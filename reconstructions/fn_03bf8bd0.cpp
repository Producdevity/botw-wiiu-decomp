extern "C" void fn_03bf6b14(void*);

extern "C" void fn_03bf8bd0(char* self) {
    fn_03bf6b14(self + 0x1C);
    *(int*)(self + 4) ^= 1;
}
