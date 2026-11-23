extern "C" void fn_043484e0(void*);
extern "C" void fn_04348568(void*, int);
extern "C" void fn_04348578(void*);
extern "C" void fn_04348580(void*, int);
extern "C" void fn_043486c0(void*);

extern "C" void fn_030a3404(void* arg0) {
    int temp_r30;
    int temp_r31;

    temp_r30 = (*(int*)((char*)arg0 + 20));
    temp_r31 = (*(int*)((char*)arg0 + 24));
    fn_043484e0((char*)arg0 + 48);
    fn_043486c0((void*)(temp_r30));
    fn_04348578((void*)(temp_r31));
    fn_04348580((char*)arg0 + 80, (*(int*)((char*)arg0 + 40)));
    fn_04348568((char*)arg0 + 236, (*(int*)((char*)arg0 + 40)));
}
