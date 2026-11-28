extern "C" void fn_0383e968(void*, int, int, int);
extern "C" void fn_026ef160(void*);
extern "C" char data_10119148[];

extern "C" void fn_026f2a58(char* self) {
    if (self[0x8C] == 0) {
        fn_0383e968(*(void**)self, (int)data_10119148, 2, (int)(self + 0x94));
    }
    if (self[0xA4] != 0) {
        fn_026ef160(self);
    }
}
