extern "C" unsigned char data_10118d94[];
extern "C" int fn_0339a0d0(void *);
extern "C" void fn_0383e968(void *, int, int, int);

extern "C" void fn_026effd0(void* arg0) {
    if (fn_0339a0d0((*(void**)arg0)) != 0) {
        if ((int) (*(unsigned char*)((char*)arg0 + 32)) == 0) {
            fn_0383e968((*(void**)arg0), (int)(data_10118d94), 2, (int)((char*)arg0 + 36));
            (*(unsigned char*)((char*)arg0 + 32)) = 1U;
        }
    } else {
        (*(unsigned char*)((char*)arg0 + 32)) = 0U;
    }
}
