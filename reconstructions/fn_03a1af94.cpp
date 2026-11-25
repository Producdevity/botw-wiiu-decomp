extern "C" void fn_0308eacc(void *, int, void *, int);
extern "C" void fn_03a1bd38(void *, void *, int, void *);

extern "C" void fn_03a1af94(void *self, void *arg1, void *arg2) {
    int kind = 2;
    fn_0308eacc((char *)self + 4, 0x80, arg1, 4);
    fn_03a1bd38(self, 0, kind, arg2);
}
