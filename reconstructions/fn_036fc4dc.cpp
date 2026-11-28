extern "C" int fn_036fc490(void*);
extern "C" void fn_03702b24(void*);
extern "C" void fn_03704d60(void*);
extern "C" void fn_03708068(void*);
extern "C" void fn_03906678(int);

extern "C" void fn_036fc4dc(char* self) {
    if (fn_036fc490(self) != 0) {
        fn_03702b24(*(void**)(self + 0x24));
        fn_03704d60(*(void**)(self + 0x28));
        fn_03708068(*(void**)(self + 0x2C));
        fn_03906678(*(int*)(self + 0x30));
    }
}
