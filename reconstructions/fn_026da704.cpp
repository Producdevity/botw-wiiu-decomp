struct Opaque_02a2d920;
extern "C" bool fn_02a2d920(const Opaque_02a2d920* object, unsigned int value);
extern "C" char* data_10463798;

extern "C" unsigned char fn_026da704(void)
{
    int result = 0;
    if (data_10463798 != 0 && fn_02a2d920((const Opaque_02a2d920*)data_10463798, 4) != 0) {
        result = 1;
    }
    return result;
}
