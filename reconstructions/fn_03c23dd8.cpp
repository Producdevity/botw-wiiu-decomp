extern "C" void fn_03c1525c(void);
extern "C" void fn_03c1e350(void*, void*);
extern "C" void fn_03c1e808(void);
extern "C" void fn_03c21aec(void);
extern "C" void fn_03c23bf8(void);
extern "C" void fn_03c23d18(void);

namespace {
struct Object {
    char padding_0[0x920];
    int counter;
};
}

extern "C" void fn_03c23dd8(void* self, void* argument)
{
    int value = ((Object *)self)->counter;
    value = (value + 1) & 0x0FFFFFFF;
    ((Object *)self)->counter = value;
    fn_03c1e350(self, argument);
    fn_03c1525c();
    fn_03c21aec();
    fn_03c23bf8();
    fn_03c1e808();
    fn_03c23d18();
}
