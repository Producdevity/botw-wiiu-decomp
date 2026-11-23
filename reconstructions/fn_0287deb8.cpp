extern "C" float data_1014c818;
extern "C" int fn_0287db9c(void*);
extern "C" int fn_0287de0c(void*);

extern "C" int fn_0287deb8(void* arg0) {
    if (!((*(float*)((char*)arg0 + 52)) > data_1014c818) && (fn_0287db9c(arg0) == 0)) {
        return fn_0287de0c(arg0);
    }
    return 0;
}
