extern "C" float fn_02e90bfc(void *);
extern "C" void fn_02e90c30(void *, float);
extern "C" float fn_02ea6a4c(int);
extern "C" void fn_02ea6a8c(void *, void *);

extern "C" void fn_02f03e78(void *self, int arg1) {
    int offset = 0x648;
    fn_02e90bfc((char *)*(void **)((char *)self + 0x478) + offset);
    fn_02e90c30((char *)*(void **)((char *)self + 0x478) + offset, fn_02ea6a4c(arg1));
    fn_02ea6a8c(*(void **)((char *)self + 0x478), (void *)arg1);
}
