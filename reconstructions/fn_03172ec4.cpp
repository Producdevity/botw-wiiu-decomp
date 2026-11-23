extern "C" float data_1028ae1c;
extern "C" int fn_0316fe80(void*);
extern "C" unsigned fn_0317097c(const unsigned* value);

extern "C" int fn_03172ec4(int arg0, void* arg1) {
    if ((arg1 == 0) || (fn_0317097c((const unsigned*)(arg1)) == 0) || (fn_0316fe80(arg1) == 0) || ((*(float*)((char*)arg1 + 12)) < data_1028ae1c)) {
        return 0;
    }
    return 1;
}
