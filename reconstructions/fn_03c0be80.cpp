extern "C" void fn_03bf6608(void*, int, int);
extern "C" void fn_03bf6b24(void*);

extern "C" void fn_03c0be80(char* self) {
    char* member = self + 4;
    fn_03bf6608(member, 0, 0);
    fn_03bf6b24(member);
}
