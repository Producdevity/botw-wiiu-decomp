extern "C" int fn_02eaa2ac(int);
extern "C" int fn_02eaa50c(void*);

extern "C" void* data_104698f8;

extern "C" unsigned char fn_02f56c24(void)
{
    int result = 0;
    int handle = (int)data_104698f8;
    if (fn_02eaa2ac(handle) != 0 && fn_02eaa50c(data_104698f8) == 0) {
        result = 1;
    }
    return result;
}
