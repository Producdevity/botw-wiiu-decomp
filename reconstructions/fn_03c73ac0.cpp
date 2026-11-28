extern "C" void fn_03c73a40(void*, int);

extern "C" void fn_03c73ac0(void *object, int value) {
    fn_03c73a40(object, 0xFF);
    fn_03c73a40(object, value);
}
