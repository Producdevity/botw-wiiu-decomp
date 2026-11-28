extern "C" void fn_02e17f58(void*, void*);
extern "C" void fn_02e17fb8(void*, void*);
extern "C" void fn_03074240(int);

extern "C" void fn_02b76570(void* object) {
    fn_03074240(1);
    fn_02e17f58(object, 0);
    fn_02e17fb8(object, 0);
}
