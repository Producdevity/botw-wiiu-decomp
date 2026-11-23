extern "C" void *data_1046d5b0;
extern "C" void fn_0322b540(int, int, int, int, int);
extern "C" void fn_0324faf0(void*);

extern "C" int fn_0324fc04(void* arg0) {
    if ((int) (*(int*)((char*)arg0 + 28)) != 0) {
        return 0;
    }
    if ((void* ) data_1046d5b0 != 0) {
        fn_0322b540((*(int*)((char*)data_1046d5b0 + 1828)), (*(int*)((char*)data_1046d5b0 + 1832)), 1, 0, 0);
    }
    fn_0324faf0(arg0);
    return 1;
}
