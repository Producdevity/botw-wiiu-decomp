extern "C" void fn_027bdd60(int* object);
extern "C" void fn_02b42014(int id);
extern "C" void fn_02b42140(int id, int value);

extern "C" void fn_027d1130(int* object) {
    fn_02b42014(*object);
    fn_02b42140(*object, 0);
    fn_027bdd60(object);
}
