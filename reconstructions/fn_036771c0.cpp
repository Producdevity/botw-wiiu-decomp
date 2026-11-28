extern "C" void fn_037e6fbc(int);
extern "C" void fn_0366c228(void*);

extern "C" void fn_036771c0(char* self) {
    char* target = 0;
    *(int*)(self + 0x530) = 0;
    self[0x648] = 2;
    fn_037e6fbc((int)(self + 0x38C));
    if (*(unsigned*)(self + 0x45C) > 3) {
        target = *(char**)(*(char**)(self + 0x464) + 0xC);
    }
    fn_0366c228(target);
}
