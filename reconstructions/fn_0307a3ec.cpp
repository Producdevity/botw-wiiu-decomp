extern "C" int fn_03079c08(int, void*);
extern "C" int fn_03079ed4(int, void*);
extern "C" int fn_0307a00c(int);
extern "C" int fn_0307a198(void*);
extern "C" int fn_03089a30(void);

extern "C" unsigned char fn_0307a3ec(void)
{
    int result = 0;
    if (fn_03089a30() == 0 && fn_03079c08(3, 0) != 0 &&
        ((fn_03079ed4(3, 0) != 0 && fn_0307a00c(3) != 0) || fn_0307a198(0) == 0)) {
        result = 1;
    }
    return result;
}
