extern "C" int fn_02fed1dc();

extern "C" int fn_02feed08(void* arg0) {
    if (((int) (*(int*)((char*)arg0 + 0x1B78)) <= 0) || ((int) (*(int*)((char*)arg0 + 0x1B84)) == 0) || (((int) (*(int*)((char*)arg0 + 0x1BBC)) != 0) && (fn_02fed1dc() == 0))) {
        return 0;
    }
    return 1;
}
