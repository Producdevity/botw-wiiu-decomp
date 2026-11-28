extern "C" void fn_03b4eab0(void *, void *, void *, void *);
extern "C" void fn_03b4ec40(void *, void *, void *, int, void *, void *, void *);
extern "C" void fn_03b4ede0(void *, void *, void *, void *);

extern "C" void fn_03b4ee48(void *object, void *first, void *second, void *third) {
    int mode = 7;
    fn_03b4eab0(object, first, second, third);
    fn_03b4ec40(object, first, second, mode, third, 0, 0);
    fn_03b4ede0(object, first, second, third);
}
