extern "C" int fn_02b333e8(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" int fn_02688840(void* arg0) {
    if ((fn_02b333e8((char*)arg0 + 44) != 0) && ((int) (*(unsigned char*)((char*)arg0 + 96)) != 0)) {
        fn_030ea2cc(arg0);
        return 1;
    }
    return 0;
}
