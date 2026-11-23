extern "C" void fn_03083708(void*, void*);
extern "C" void fn_03a2b0d4(void* p);
extern "C" void fn_03a2b1e0(int, void*, int);
extern "C" unsigned* fn_03a38bf4(unsigned* context);

extern "C" void fn_02f0826c(void* arg0, void* arg1) {
    unsigned int sp8;

    if ((int) (*(int*)((char*)arg0 + 176)) != 0) {
        fn_03a38bf4((unsigned*)(&sp8));
        fn_03083708(arg1, &sp8);
        fn_03a2b1e0((*(int*)((char*)arg0 + 176)), &sp8, 0);
        fn_03a2b0d4((*(void**)((char*)arg0 + 176)));
    }
}
