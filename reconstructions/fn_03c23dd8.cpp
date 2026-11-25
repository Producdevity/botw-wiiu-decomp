extern "C" void fn_03c1525c(void);
extern "C" void fn_03c1e350(void*, void*);
extern "C" void fn_03c1e808(void);
extern "C" void fn_03c21aec(void);
extern "C" void fn_03c23bf8(void);
extern "C" void fn_03c23d18(void);

extern "C" void fn_03c23dd8(void* self, void* arg)
{
    int* counter = (int*)((char*)self + 0x920);
    int value = *counter;
    value = (value + 1) & 0x0FFFFFFF;
    *counter = value;
    fn_03c1e350(self, arg);
    fn_03c1525c();
    fn_03c21aec();
    fn_03c23bf8();
    fn_03c1e808();
    fn_03c23d18();
}
