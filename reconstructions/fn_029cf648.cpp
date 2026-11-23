extern "C" void fn_029cf2c0(void* object);
extern "C" void fn_034cc350(int value);
extern "C" float data_1017f628;

extern "C" void fn_029cf648(void* object) {
    fn_034cc350(*(int*)((char*)object + 0x14));
    *(float*)((char*)object + 0x18) = data_1017f628;
    fn_029cf2c0(object);
}
