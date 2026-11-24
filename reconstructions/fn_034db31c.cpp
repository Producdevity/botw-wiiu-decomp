extern "C" int (*data_102630ec)(int);
extern "C" int fn_034db31c(void* self, unsigned int type)
{
    int mask = 1;
    if (type == 0x10000 && (data_102630ec(*(int*)((char*)self + 8)) & mask)) {
        return 1;
    }
    return 0;
}
