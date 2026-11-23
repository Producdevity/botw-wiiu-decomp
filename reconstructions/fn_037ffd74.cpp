extern "C" void fn_034a8438(int);
extern "C" void fn_037fed84(void*, int, void*, void*, void*);
extern "C" void fn_037fef40(void*, int, int, int, int);

extern "C" void fn_037ffd74(void* arg0) {
    if ((int) (*(unsigned char*)((char*)arg0 + 64)) == 0) {
        fn_037fed84(arg0, 0, 0, 0, 0);
        fn_034a8438((*(int*)((char*)arg0 + 244)));
        fn_037fef40(arg0, 0, 0, 0, 0);
    }
}
