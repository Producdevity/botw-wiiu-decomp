extern "C" int fn_03396390(void*);
extern "C" int fn_033976b4(void*);

extern "C" int fn_0210dad4(int arg0, void* arg1) {
    if ((fn_03396390((char*)arg1 + 4) != 0) || (fn_033976b4((char*)arg1 + 4) != 0)) {
        return 1;
    }
    return 0;
}
