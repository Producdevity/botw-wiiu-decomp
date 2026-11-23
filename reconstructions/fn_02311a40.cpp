extern "C" void fn_02e1aa0c(int, int);
extern "C" void fn_03075f34();
extern "C" int fn_03075f54();
extern "C" void fn_03075f7c();

extern "C" void fn_02311a40(void* arg0) {
    fn_02e1aa0c(0, 0);
    if (fn_03075f54() != 0) {
        fn_03075f7c();
        return;
    }
    (*(int*)((char*)arg0 + 16)) = 0;
    fn_03075f34();
}
