extern "C" unsigned char data_100f1638[];
extern "C" void fn_0294e1d0(void*, void*, void*, void*);
extern "C" int fn_02b62ba8(void);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);

extern "C" void fn_025e8858(void* * arg0) {
    void* temp_r12;

    fn_0294e1d0((void*)(*arg0), (void*)(fn_02b62ba8()), 0, 0);
    temp_r12 = *arg0;
    (*(int*)((char*)temp_r12 + 868)) = (int) ((*(int*)((char*)temp_r12 + 868)) | 0x02000000);
    fn_037b8284(arg0, data_100f1638, 0);
}
