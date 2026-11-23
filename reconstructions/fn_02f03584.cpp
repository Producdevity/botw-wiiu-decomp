extern "C" void *data_104698f8;
extern "C" unsigned char fn_02eaa630(void* p);
extern "C" void fn_02eaa638(void* p, unsigned char v);
extern "C" unsigned char fn_02efc068(void* p);
extern "C" void fn_02f03514(void*);

extern "C" void fn_02f03584(void* arg0) {
    if (fn_02efc068((char*)arg0 + 1156) != 0) {
        fn_02eaa638((void*)(data_104698f8), 1);
    }
    if (fn_02eaa630((void*)(data_104698f8)) != 0) {
        fn_02f03514(arg0);
    }
}
