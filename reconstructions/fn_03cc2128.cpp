extern "C" void fn_03cb76a4(void*);

extern "C" void fn_03cc2128(void* object)
{
    *(int*)((char*)object + 72) = 0;
    *(int*)((char*)object + 76) = 0;
    *(int*)((char*)object + 80) = 0;
    fn_03cb76a4(object);
}
