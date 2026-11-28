extern "C" void fn_03bf6314(void*, int, int, int);
extern "C" void fn_03bf6b14(void*);

extern "C" void fn_03c0af68(char* self) {
    fn_03bf6314(self, 0, *(int*)(self + 4), 1);
    fn_03bf6b14(self);
}
