extern "C" void fn_02e8c0fc(void *);
extern "C" void fn_02e8c178(void *);
extern "C" void fn_02e8c314(void *);

extern "C" void fn_02e8c31c(void *self) {
    unsigned char flags = *(unsigned char *)((char *)self + 0x14) & 0xFFFFFFFD;
    *(char *)((char *)self + 0x15) = 0;
    *(unsigned char *)((char *)self + 0x14) = flags;
    fn_02e8c314(self);
    fn_02e8c0fc(self);
    fn_02e8c178(self);
    *(int *)((char *)self + 0x18) = 0;
}
