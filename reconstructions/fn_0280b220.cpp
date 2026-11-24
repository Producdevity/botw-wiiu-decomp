extern "C" int fn_0280c420(void);
extern "C" int fn_0280b220(void* self)
{
    char* object = (char*)self;
    if (fn_0280c420() == 0) {
        return 0;
    }
    *(char*)(object + 0x4C) = 0;
    return 1;
}
