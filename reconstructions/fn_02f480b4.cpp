extern "C" void fn_02f47e00(int);
extern "C" int fn_02f47e18(void*, int, void*, int);

extern "C" void fn_02f480b4(void* arg0) {
    fn_02f47e00((*(int*)((char*)arg0 + 0x2378)));
    (*(int*)((char*)arg0 + 0x237C)) = fn_02f47e18(arg0, (*(int*)((char*)arg0 + 0x2378)), (char*)arg0 + 0x1BF4, 0x10000);
    if ((int) (*(unsigned char*)((char*)arg0 + 0x2376)) != 0) {
        fn_02f47e00((*(int*)((char*)arg0 + 0x2380)));
        (*(int*)((char*)arg0 + 0x2384)) = fn_02f47e18(arg0, (*(int*)((char*)arg0 + 0x2380)), (char*)arg0 + 0x1FB4, 0x5000);
    }
}
