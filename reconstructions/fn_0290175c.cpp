extern "C" void fn_029016bc(void*, int);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" unsigned char data_1015fa4c[];

extern "C" void fn_0290175c(void* self, void* value)
{
    fn_029016bc(self, 1);
    const void* key = data_1015fa4c;
    fn_037b8284(self, key, value);
}
