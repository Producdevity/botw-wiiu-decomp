extern "C" void fn_03a837f4(void*, int, void*);
extern "C" void fn_03a83d34(void*, int, int, int, int);
extern "C" void fn_03a83958(void*, void*, int, int);

extern "C" void fn_038bd948(void* self, void* p1) {
    fn_03a837f4((char*)self + 80, 1, p1);
    fn_03a83d34((char*)self + 80, 6, 10, 0, 1);
    fn_03a83958((char*)self + 80, p1, 2, 1);
}
